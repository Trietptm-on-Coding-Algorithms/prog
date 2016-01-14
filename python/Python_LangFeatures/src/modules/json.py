
import json


def show_it():

    json_data = json.loads('{"test":"ttt"}')


    #pretty print
    pretty_string = json.dumps(json_data, sort_keys=True, indent=4, separators=(',',':'))

    print pretty_string
