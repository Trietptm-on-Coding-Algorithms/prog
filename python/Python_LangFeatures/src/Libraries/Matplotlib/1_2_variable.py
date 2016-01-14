import numpy as np
import matplotlib.pyplot as plt

def main():


	xes = [1,2,3,4]
	linear_y = [1,4,7,10]
	curve_y = [1,4,9,16]
	curve_y_high = [ x+3 for x in curve_y ]

	example1( xes, linear_y, curve_y, curve_y_high )
	example2(  xes, linear_y, curve_y, curve_y_high )
	example3( xes, linear_y, curve_y, curve_y_high )

def example1(t,y1,y2,y3):
	print "Dot Plot - different symbols for different lines"

#	t = np.arange( 0., 5., 0.2 )
	#plot can take any number of arguments
	#the arguments can be grouped into different data sets
	plt.plot( t, y1, 'r--', t, y2, 'bs', t, y3, 'g^' )
	plt.show()

	raw_input( "press enter for next" )

def example2(t,y1,y2,y3):
	print "Dot Plot - change line to thick blue line. Plot on seperate lines" 
	
	plt.plot( t, y1, linewidth=2.0) 
	plt.plot( t, y2, 'bs', t, y3, 'g^' )
	plt.axis( [0,5,0,20] )
	plt.show()


	raw_input( "press enter for next" )

def example3(t,y1,y2,y3):
	print "Dot Plot - change line to thick blue line. Plot on seperate lines" 
	
	line1, = plt.plot( t, y1, linewidth=2.0) 
	lines = plt.plot( t, y2, 'bs', t, y3, 'g^' )
	line1.set_label( "base data" )
	plt.setp( lines, "ls", "-." ) #matlib style string/value pair
	plt.setp( lines[0], color="red")
	plt.setp( lines[1], color="green")

	plt.axis( [0,5,0,20] )
	plt.show()


	raw_input( "press enter for next" )

if __name__ == "__main__":
	main()
