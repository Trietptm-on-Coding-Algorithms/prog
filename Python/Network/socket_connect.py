import socket
import sys

#python 3.3
def main(ip):
	
	for i in range(10000):
		banner = retBanner( ip, i )
		if banner != '':
			print( ip+":"+str(i)+" response: " + str(banner) )

def retBanner( ip, port ):

	try:
		socket.setdefaulttimeout( 10 )
		s = socket.socket()
		s.connect( (ip, port ) )

		return s.recv(1024)

	except Exception as e:
		return ''
	finally:
		s.close()

if __name__ == "__main__":
	main(sys.argv[1])
