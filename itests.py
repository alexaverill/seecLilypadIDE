import interperator_class as IC
#general tests to check that interperator class is parsing correctly.
saveFile = "./temp.ino"
inFile = "test.test"
interp = IC.interpClass(inFile,saveFile)
interp.parseFile(inFile)
interp.writeFile(saveFile)
