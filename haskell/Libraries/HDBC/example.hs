import Control.Exception
import Database.HDBC
import Database.HDBC.PostgreSQL

main =
    c <- connectPostgreSQL "host=localhost dbname=testdb user=tester password=tester"
    create <- prepare c "CREATE TABLE test(id int);"
    commit c
    disconnect c
