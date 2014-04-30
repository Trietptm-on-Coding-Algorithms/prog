#!/bin/bash

if [ -z $1 && -f $1 ]
then
	echo "Must have an argument that is a valid filename"
	exit
fi
initial=( `cat "$startfile" | sed -e '/#/d' | tr -d '\n' | sed -e 's/\./\. /g' -e 's/_/_/g'` )
