
import NetworkScanner2

a = NetworkScanner2.scanNetwork( '192.168.1.', [x+1 for x in range(254)] )

for i in a:
	print i
