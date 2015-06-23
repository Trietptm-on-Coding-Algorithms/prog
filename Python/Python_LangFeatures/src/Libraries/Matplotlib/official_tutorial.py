import matplotlib.pyplot as plt
import numpy as np
import sys
#refer to matplotlib.org/users/pyplot_tutorial.html for text 

def main():

	xes = [1,2,3,4]
	linear_y = [1,4,7,10]
	curve_y = [1,4,9,16]
	curve_y_high = [ x+3 for x in curve_y ]

	string =""
	while string != "q":
		string = raw_input( "View a plot enter 1-9 or q to quit:" )
		if string == "1":
			example1( xes, linear_y )
		elif string == '2':
			example2( xes, linear_y )
		elif string == '3':
			example3( xes, linear_y )
		elif string == "4":
			example4( xes, linear_y, curve_y, curve_y_high )
		elif string == "5":
			example5(  xes, linear_y, curve_y, curve_y_high )
		elif string == "6":
			example6( xes, linear_y, curve_y, curve_y_high )
		elif string == "7":
			example7()
		elif string == "8":
			example8()
		elif string == "9":
			example9()
		elif string == "q":
			sys.exit()
		else:
			print "Did not understand input. Try again"


	

def example1(x,y):
	print "Basic Plot - line with blue and arbitrary axis" 
	print x
	print y
	plt.plot( x, y )
	plt.show()


def example2(x,y):
	print "Dot Plot - dots for information" 
	
	plt.plot( x, y, 'ro' )
	plt.show()


def example3(x,y):
	print "Dot Plot - dots for information. Axis modified" 
	
	plt.plot( x, y, 'ro' )
	plt.axis( [0, 6, 0, 20] )#plt.axis( [x_min, x_max, y_min, y_max ] )
	plt.show()



def example4(t,y1,y2,y3):
	print "Dot Plot - different symbols for different lines"

#	t = np.arange( 0., 5., 0.2 )
	#plot can take any number of arguments
	#the arguments can be grouped into different data sets
	plt.plot( t, y1, 'r--', t, y2, 'bs', t, y3, 'g^' )
	plt.show()


def example5(t,y1,y2,y3):
	print "Dot Plot - change line to thick blue line. Plot on seperate lines" 
	
	plt.plot( t, y1, linewidth=2.0) 
	plt.plot( t, y2, 'bs', t, y3, 'g^' )
	plt.axis( [0,5,0,20] )
	plt.show()



def example6(t,y1,y2,y3):
	print "Dot Plot - change line to thick blue line. Plot on seperate lines" 
	
	line1, = plt.plot( t, y1, linewidth=2.0) 
	lines = plt.plot( t, y2, 'bs', t, y3, 'g^' )
	line1.set_label( "base data" )
	plt.setp( lines, "ls", "-." ) #matlib style string/value pair
	plt.setp( lines[0], color="red") #python keyword arguments
	plt.setp( lines[1], color="green")

	plt.axis( [0,5,0,20] )
	plt.show()



def f(t):
	return np.exp(-t) * np.cos( 2*np.pi*t )

def example7():

	t1 = np.arange(0.0, 5.0, 0.1 )
	t2 = np.arange( 0.0, 5.0, 0.02 )

	#pyplot has a current figure and current axes
	plt.figure(1)	#sets figures
		#gcf() returns current figure
	plt.subplot(2,1,1) 	#sets subplot
		#subplot(row,col,current_plot)
		#gca() returns current axes
	plt.plot( t1, f(t1), 'bo', t2, f(t2), 'k' )
	
	plt.subplot( 2,1,2 )
	plt.plot( t2, np.cos( 2* np.pi*t2), 'r--')

	
	plt.title( "Example 7 with title" )
	plt.subplot( 2,1,1 )
	plt.xlabel( 'X for figure 1' )
	plt.ylabel( 'Y for figure 1' )
	plt.show()

def example8():
	print "Histogram with text on graph"

	mu, sigma = 100, 15
	x = mu + sigma * np.random.randn(10000)

	n, bins, patches = plt.hist( x, 50, normed=1, facecolor='g', alpha=0.75 )

	plt.xlabel( 'smarts' )
	plt.ylabel( 'Probability' )

	plt.title( 'Histogram of IQ' )
	plt.text( 60.0, .025, r'$\mu='+str(mu)+',\ \sigma='+str(sigma)+'$' )
	plt.axis( [40,160,0,0.03] )
	plt.grid( True )

	plt.show()

def example9():

	ax = plt.subplot(1,1,1)
	
	t = np.arange(0.0,5.0,0.01)
	s = np.cos( 2*np.pi*t )
	line, = plt.plot(t,s,lw=2)

	plt.annotate( 'local max', xy=(2,1), xytext=(3,1.5), arrowprops=dict(facecolor='black', shrink=0.05), )

	plt.ylim(-2,2)
	#plt.show()
		
	plt.savefig('example9.png', dpi=300)
	
if __name__ == "__main__":
	main()
