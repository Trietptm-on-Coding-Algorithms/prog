from socket import *

def scanNetwork(baseIP, Ranges):
	#scanNetwork( str baseIP, [str] Range)
		#baseIP gives the possible base ips in each byte
		#Range gives the ranges for testing

	valid_addresses = []

	for r in Ranges:
		current_address = baseIP + str(r)
		if testActiveIPAddress( current_address ):
			valid_address.append( current_address )

	return valid_addresses

def testActiveIPAddress( address ):
	s = socket(AF_INET, SOCK_STREAM)
	s.settimeout(100)


	try:
		result = s.connect( (address, 80) ) 
	except socket.error, e:
		pass
	finally:
		s.close()
		
	return result

