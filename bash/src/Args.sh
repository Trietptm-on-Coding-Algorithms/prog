
#error code
E_WRONG_ARGS=99
#test parameter
Number_of_expected_args=2
scripts_paramters="-a -h -m -z"
echo "The number of args found is $#"
echo "The IFS(input field separator of the args is $*"
echo "The array style arg variable is $@"

if [[ $# != $Number_of_expected_args ]]
then
	echo "Usage: `basename $0` $script_paramters"
	# `basename $0` is the script's filename
	exit $E_WRONG_ARGS
fi

if [[ -z $1 ]]
then
	echo "The first arg does not exist. respond as needed"
fi


