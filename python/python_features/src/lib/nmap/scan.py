import nmap
import sys
def main(ip):
	nm = nmap.PortScanner()
	nm.scan( ip, '1-10000' )
	print nm[ip].hostname()
	for key in nm[ ip ][ 'tcp' ].keys():
		print  nm[ ip ][ 'tcp' ][ key ]



if __name__ == "__main__":
	main(sys.argv[1])
