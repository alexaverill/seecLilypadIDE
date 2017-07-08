import treeClass
import os
class interpClass:
    #definitions for pins and sensor types
    pinDict = {'LED1':5,'LED2':6,'LED3':'A2','LED4':'A4','LED5':'A3','BUZZER':7,'MOTOR':3,'BUTTON':"A5",'SLIDE':2,'TEMP':"A2",'LIGHT':"A6"}
    keyWords ={"USE","WAIT","IF","WHILE"}
    analogSensors = {'TEMP',"LIGHT"} #use to reference the right sensors. If sensors are here then search through pinDict
    tones = {"C":1046,"D":1175,"E":1319,"F":1397,"G":1568,"A":1760,"B":1976,"C1":3092,"D1":2349}
    digitalSensors = {"BUTTON","SLIDE"}
    defaultDelay = 1000 #default rate for the WAIT command. 
    digitalStr = "digitalWrite("
    analogStr = "analogWrite("
    endStr = ");"
    def __init__(self,inFileName,outFileName):
        self.instructions=['void loop(){'] # holds all instructions that need to be in loop()
        self.setup = [] #holds everything for the setup()
        self.variables = [] #holds all user defined variables to be put into the filename.ino
        self.inFile = inFileName
        self.outFile = outFileName
        
    def stripStr(self,str):
        #take in a str and removes newlines and tabs 
        str = str.replace("\n","")
        str = str.replace("\t","")
        return str
    def parseLine(self,string):
        #split the string based on spaces
        string =  self.stripStr(string)
        stringArray = string.split(" ")
        #print(stringArray)
        #check to make sure that the first element is something we can use
        if(stringArray[0] in self.pinDict):
            #it at least is something we may be able to use
            return stringArray
        else:
            #first position does not contain a keyword, 
            # loop through elements in the line until a keyword appears
            # general syntax is KEYWORD MODIFIER
            # add keyword and neighbor to array and return.
            #should negate any indentations or spaces prior to returning
            position =0
            array = []
            #print(stringArray)
            for element in stringArray:
                if(len(element)>0):
                    if((element in self.pinDict)or (element in self.keyWords)):
                        array.append(stringArray[position])
                        if(position+1 <len(stringArray)):
                            array.append(stringArray[position+1])
                        return array
                position +=1
        return stringArray;
    def cleanConditionalStatement(self,str):
        #replaces ( and ) with a spaced version to make the str.split(" ") work 
        # also removes the ineveitable IF and { so it doesnt try to get added to the tree
        str = str.replace("("," ( ")
        str = str.replace(")"," ) ")
        str = str.replace("{","")
        str = str.replace("IF","")
        str = str.replace("WHILE","")
        return str
    def convertConditional(self,str):
        #take in a conditional string split it based on the operator and return a final string to be added to the IF or while statemetns 
        cond = ["==","!=","<=",">=",">","<"]
        for thing in cond:
            str=str.replace(thing," "+thing+" ")
        strArray = str.split(" ")
        finalArray=[]
        for element in strArray:
            if(len(element)>0):
                if(element in self.pinDict):
                    finalArray.append(self.pinDict[element])
                else:
                    finalArray.append(element)
        output=''
        for element in finalArray:
            output+=element
        return output
    def convertTree(self,root):
        #traverse tree and covert statements to the nessisary C statemetns 
        stack = ''
        if root:
            if(root.operator==True):
                stack+=(root.value)
            else:
                stack+=self.convertConditional(root.value)
            stack +=self.convertTree(root.left)
            stack += self.convertTree(root.right)
        return stack    
            
    def parseConditionalStatement(self,string):
        #break down comparisons used for IF or WHILE statements
        # 
        string = self.cleanConditionalStatement(string)
        # we now have a clean string so time to parse and add it to a tree
        #split the string
        strArray = string.split(" ")
        root = treeClass.tree(None)
        for element in strArray:
            if(len(element)>0):
                insert = treeClass.tree(element)
                root.addChild(insert)
        returnString = self.convertTree(root)
        #print(returnString)
        return returnString
    def parseAssignmentStatement(self,string):
        string = self.stripStr(string)
        string = string.replace("="," = ")
        strArray = string.split(" ")
        cleanArray = []
        for element in strArray:
            if(len(element)>0):
                cleanArray.append(element)
        assignPos = cleanArray.index("=")
        #ADD sanity checks to make sure variables aren't also port names etc
        outString = "float "+cleanArray[assignPos-1]+"="+cleanArray[assignPos+1]+";"
        return outString
    def parseFile(self,inputFile):
        try:
            inputFile = open(inputFile,"r")
        except FileNotFoundError:
            print("File Not Found")
            pass #need to add an alert dialog about this. 
        except:
            print("Something isn't right")
            pass
        lineNumber = 0 # used to track errors
        for line in inputFile:
            line = line.upper()  #force to be uppercase to make comparison easier
            if("USE" in line):
                parsedArray = self.parseLine(line)
                #print(parsedArray)
                name = parsedArray[1]
                if(name in self.analogSensors or name in self.digitalSensors):
                    self.setup.append("pinMode("+str(self.pinDict[name])+",INPUT);")
                else:
                    self.setup.append("pinMode("+str(self.pinDict[name])+",OUTPUT);")
            if("VAR" in line):
                insert = self.parseAssignmentStatement(line)
                self.variables.append(insert)
            if("WAIT" in line):
                parsedArray = self.parseLine(line)
                if(len(parsedArray)>1 and parsedArray[1] !='' ):
                    self.instructions.append("delay("+str(parsedArray[1]+");"))
                else:
                    self.instructions.append("delay("+str(self.defaultDelay)+");")
            if("BUZZER" in line and "USE" not in line):
                parsedArray = self.parseLine(line)
                if(parsedArray != False):
                    if(parsedArray[1]=="OFF"):
                        #time to turn off buzzer
                        self.instructions.append("noTone("+str(self.pinDict[parsedArray[0]])+");")
                    elif(parsedArray[1] in self.tones):
                        self.instructions.append("tone("+str(self.pinDict[parsedArray[0]])+","+str(self.tones[parsedArray[1]])+");")
            if(("ON" in line or "OFF" in line) and "BUZZER" not in line):
                #the line should look like "LED1 ON" or "MOTOR ON" 
                #call parseLine function to get back an array that should have ["LED1","ON"]
                # the parseLine will also remove \tLED1 in the event that its a nested
                parsedArray = self.parseLine(line) 
                if(parsedArray != False):
                    #print(parsedArray)
                    if(parsedArray[1]=="ON"):
                        digtype = "HIGH"
                    elif(parsedArray[1]=="OFF"):
                        digtype = "LOW"
                    else:
                        print("Invalid Syntax on line:" + str(lineNumber)+" | "+line)
                        break
                    self.instructions.append(self.digitalStr+str(self.pinDict[parsedArray[0]])+","+digtype+self.endStr)
                else:
                    print("Invalid Syntax on line: " + str(lineNumber)+" | "+line)
            if("WHILE" in line):
                insert = self.parseConditionalStatement(line)
                self.instructions.append("while"+insert+"{")
            if("IF" in line):
                insert = self.parseConditionalStatement(line)
                self.instructions.append("if"+insert+"{")
            if("}" in line):
                self.instructions.append("}")
            if("ELSE" in line and "IF" not in line):
                self.instructions.append("else{")
            if("ELSE IF" in line):
                insert = self.parseConditionalStatement(line)
                self.instructions.append("else if"+insert+"{")
            if("%" in line):
                parsedArray = self.parseLine(line)
                #percentage value will be in parsedArray[1]
                value=parsedArray[1][:len(parsedArray[1])-1]
                maxValue = 255
                percentageValue = int(value)*.01
                finalValue = int(maxValue * percentageValue)
                if(finalValue>255):
                    finalValue = 255
                self.instructions.append(self.analogStr+(str(self.pinDict[parsedArray[0]])+","+str(finalValue))+");")
            lineNumber +=1
    def writeFile(self,outputFile):
        try:
            output = open(outputFile,"a")
        except:
            pass
        #cpStr = "cp Master.ino,"+output
        #os.system(cpStr)
        #self.variables.append("int outputPins[] = {5,6,A2,A3,A4,3,7,12}; int inputPins[]  = { A5,A6,A1,2};") 
        #self.setup.append("for(int x=0;x<8;x++){pinMode(outputPins[x],OUTPUT);}for(int x = 0; x<4; x++){pinMode(inputPins[x],INPUT);  } Serial.begin(9600);")
        for item in self.variables:
            output.write(item+"\n")
            print(item)
        output.write("void setup(){\n")
        print("void setup(){\n")
        for item in self.setup:
            output.write(item+"\n")
            print(item)
        output.write("}\n")
        print("}")
        for item in self.instructions:
            output.write(item+"\n")   
            print(item)
        output.write("}\n")
        print("}")
    def uploadCode(self):
        #check if outputfile is in the correct {NAME}/name.ino format, otherwise create a temp folder and move it
        #('/home/aaverill/RaspberryPiKits/lilypad/UI/testing/testing', 
        # create a temp file to always be used to store the arduino Sketch.
        file = './temp/temp.ino'
        #clear file by writing an empty string. 
        os.system('echo "" > ./temp/temp.ino')
        #now write to the temp file for compilation
        self.writeFile(file)
        arduinoString = '/usr/share/lilypadide/arduino/arduino --board arduino:avr:lilypad:cpu=atmega328 --port /dev/ttyUSB0 --upload '
        return os.system(arduinoString+" ./temp/temp.ino")


