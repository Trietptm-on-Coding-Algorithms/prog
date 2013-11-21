
import DatabaseConnect
import sys

def main():

	db = sys.argv[1]
	u = sys.argv[2]	

	print "Connecting to %s with user %s" % (db, u)
	
	connect = DatabaseConnect.Connection_Factory( db, u )
	cur = connect.cursor()
	cur.execute( 'SELECT version()' )
	ver = cur.fetchone()
	print ver

if __name__ == '__main__':
	main()
