
def demo():

	a = [1,23]
	if isinstance(a, list):
		print 'True'
	else:
		print 'False'

def numbers():
    #numbers are handled transparently
    # there are integer and float types
    # they are casted up C style
    a = 2 
    b = 5.5
    c = 2*5.5

    #integer division results in an integer
    intDivResult = 11/2 # = 5
    intDivWithFloatResult = float(11)/2

def string():
    "A string"
    'Another string with " asd" '
    """
        a multiline string
        used in pydocs
    """

def bools():
    a = True
    b = False
    orz = a or b
    andz = a and b
    notz = not a

def variableAssignmentSyntax():
    """
        There is a lot of syntactic sugar for variable assignment
    """
    a = b = c = 1 #all are 1
    a,b = 5, 4
    c = (2,3)
    a,b = c # a = 2, b = 3
