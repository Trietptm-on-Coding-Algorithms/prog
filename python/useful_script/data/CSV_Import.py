

import pandas as pd
from sqlalchemy import create_engine

username = ''
password = ''
server = ''
database = ''
schema_name = ''

def importData(path, connect_string):
    df = pd.read_csv(path)
    df.columns = [c.lower() for c in df.columns]

    engine = create_engine(connect_string)

    df.to_sql("nyse_symbol_list", engine, schema=schema_name)


importData("/home/leeeee/nyse_symbollist.csv",
        "postgresql://"+username+":"+password+"@"+server+"/"+database)
