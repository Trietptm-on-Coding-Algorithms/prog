
#error code
E_WRONG_ARGS=99
#test parameter
Number_of_expected_args=2
scripts_paramters="-a -h -m -z"
echo $#

if [ $# -eq $Number_of_expected_args ]
then
	echo "Usage: `basename $0` $script_paramters"
	# `basename $0` is the script's filename
	exit $E_WRONG_ARGS
fi
echo "$# is the number of args"
echo -e "\n\n\n"
echo "$*"
echo "$@"
