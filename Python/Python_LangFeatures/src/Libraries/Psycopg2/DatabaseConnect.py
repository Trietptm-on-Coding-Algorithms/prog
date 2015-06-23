

import psycopg2
import sys


def Connection_Factory( database_name, user_name ):
	con = None
	
	try:
		con = psycopg2.connect( database=database_name, user=user_name )
		

	except psycopg2.DatabaseError, e:
		print 'Error %s' % e
		sys.exit(1)

	return con
