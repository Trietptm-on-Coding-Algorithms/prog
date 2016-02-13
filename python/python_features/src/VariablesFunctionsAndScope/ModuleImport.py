import wall
from sub import funcFromSubDir


def demo():
    n = 1
    n = funcInFile(n)	
    n = wall.funcInAnotherFile(n)
    if n == (3*7*11):
        print("Match Confirmed")

def funcInFile( num ):
    return num * 3

