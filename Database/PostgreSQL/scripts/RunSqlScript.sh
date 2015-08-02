#!/bin/bash

set -e


if [  -z "$1" ] || [ -z "$2" ]
then
	echo "Script args:: DATABASE_NAME SCRIPT_PATH"
	exit
fi

psql -d $1 -f $2



