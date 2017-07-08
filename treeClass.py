class tree:
    operators = [')','(','and','or']
    def __init__(self,value):
        self.left = None
        self.right = None
        self.parent = None
        self.operator = False
        if(value == None):
            self.value=None
        else:
             self.value = value
        
    def addChild(self,child):
        if(self.value==None):
            #set the root to the first thing inserted, should always be a (
            if(child.value in self.operators):
                self.operator = True
            self.value = child.value
        elif(child.value in self.operators):
            if(self.right == None):
                child.operator = True
                child.parent = self
                self.right = child
                return True
            else:
                return self.right.addChild(child)
        else:
            if(self.left == None and self.right == None):
                #there is no right child and no left child so we insert to the left
                child.parent = self
                self.left = child
                return True
            else:
                #there is a right child so we need to shift right to add correctly.
                if(self.right):
                    #check if there is a right child to insert to
                    return self.right.addChild(child)
                else:
                    #this seems to be a bit redundant. should fix
                    self.right = child
                    return True


