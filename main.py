#!/usr/bin/env python3
import sys
from time import sleep
from os import environ as EV
import interperator_class as IC
from PyQt5 import  QtCore, QtGui, QtWidgets
from mainWindow import Ui_MainWindow
class mainWindow(Ui_MainWindow):
    def __init__(self,dialog):
        Ui_MainWindow.__init__(self)
        self.setupUi(dialog)
        self.fileName=None
        self.outFileName=None
        #open and save buttons buttons 
        self.openBtn.clicked.connect(lambda:self.openFile())
        self.saveBtn.clicked.connect(lambda:self.saveFile())
        #set run button to checkable to disable when compiling for arduino
        self.runBtn.setCheckable(True)
        self.runBtn.clicked.connect(lambda:self.runCode())
        self.codeStatus.setLineWrapMode(0)
        #menuOPtions
        #self.actionAbout.triggered.connect(lambda:self.displayAbout())
        self.actionOpen.triggered.connect(lambda:self.openFile())
        self.actionSave.triggered.connect(lambda:self.saveFile())
    def runCode(self):
        #force save into a temp file.
        #update codeStatus
        self.codeStatus.setText("Please wait - code is compiling")
        self.codeStatus.setStyleSheet("background-color:yellow")
        QtWidgets.QApplication.processEvents()
        self.saveFile("./temp/temp.sco")
        interp = IC.interpClass(self.fileName,self.outFileName)
        interp.parseFile(self.outFileName)
        errors = interp.returnErrors()
        print(errors)
        #interp.writeFile(self.outFileName+".ino")
        if(len(errors)>0):
            self.errorList.addItems(errors)
            self.codeStatus.setText("There was an Error")
            self.codeStatus.setStyleSheet("background-color:red")
            self.runBtn.setChecked(False)
            interp.clearErrors()
        else:
            self.codeStatus.setText("")
            self.errorList.clear()
            self.codeStatus.setStyleSheet("background-color:white")
            runCode=interp.uploadCode()
            if(runCode == 0):
                self.codeStatus.setText("Code has compiled.")
                self.codeStatus.setStyleSheet("background-color:white")
                self.runBtn.setChecked(False)
            else:
                self.codeStatus.setText("There was an Error")
                self.codeStatus.setStyleSheet("background-color:red")
                self.runBtn.setChecked(False)
    def saveFile(self,altFile=None):
        if(altFile==None):
            self.outFileName =QtWidgets.QFileDialog.getSaveFileName(None, 'Save File', EV['HOME']) #open save file dialog at home dir. using os.environ['HOME'] shortened via import
            self.outFileName = self.outFileName[0]
        else:   
            self.outFileName=altFile
        text = self.textEdit.toPlainText()
        try:
            file = open(self.outFileName,'w')
            file.write(text)
        except FileNotFoundError:
            #file not found error is only thrown on a cancel selection in the File Dialog.
            #so we just ignore it as an error. 
            #print("Please select a File")
            pass
        except:
            pass
    def openFile(self):
        self.fileName =QtWidgets.QFileDialog.getOpenFileName(None, 'Open File', EV['HOME']) #see line 42
        try:
            fileData = open(self.fileName[0],'r')
            with fileData:
                data = fileData.read()
                self.textEdit.setText(data)
        except FileNotFoundError:
            #FnF error is only thrown when user selects cancel. So we just ignore it since it technically is correct
            #print("Please Select a File")
            pass
        except:
            pass    
if(__name__=='__main__'):
    app = QtWidgets.QApplication(sys.argv)
    dialog = QtWidgets.QMainWindow()
 
    prog = mainWindow(dialog)
 
    dialog.show()
    sys.exit(app.exec_())
