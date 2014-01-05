

def evaluateF( F, x):
	F(x)


def printer(x):
	print x

def main():
	evaluateF( printer, 'Function passed as argument' )

if __name__ == "__main__":
	main()
