

def main():
	
	classFunction = function_holder()
	passedFunction = classFunction.getFunction()
	passedFunction()
	

class function_holder:

	def getFunction(self):
		return self.targetFunction 

	def targetFunction(self):
		print "function was passed"

if __name__ == "__main__":
	main()


