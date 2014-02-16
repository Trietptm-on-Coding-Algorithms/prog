#/bin/bash

scripts_paramters="-a -h -m -z"

if [ $# -ne $Number_of_expected_args ]
then
	echo "Usage: `basename $0` $script_paramters"
	# `basename $0` is the script's filename
	exit $E_WRONG_ARGS
fi
