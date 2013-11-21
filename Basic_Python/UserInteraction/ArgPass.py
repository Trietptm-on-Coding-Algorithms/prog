
import sys

def main(argv=None):
	if argv == None:
		argv = sys.argv
	for i in argv[1:]:
		print i 


if __name__ == "__main__":
	main()
