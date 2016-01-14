import sys
import wall
from sub import take
#the __init__.py in sub directory is mandatory

def main():
	for i in reversed(range(90,100)):
		chorus( i )

def chorus( n ):
	bottles( n )	
	wall.wall()
	bottles( n )
	print ""	
	take.take()
	bottles( n-1 )
	wall.wall()

def bottles( num ):
	sys.stdout.write( "{0} Bottles of beer ".format( num ) )

	
if __name__ == "__main__":
	main()


