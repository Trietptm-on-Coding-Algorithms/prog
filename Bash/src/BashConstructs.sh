#!/bin/bash

shopt -s cdspell
#shopt changes shell options on the fly
# cdspell will automatically correct directory names

cd /hpme
pwd
#!/bin/bash

. data/source.data

echo $f_name
echo $l_name
echo $age
#!/bin/bash

exec echo "Exiting \"$0\" at line $LINENO."
# exec opens a new shell process to execute the command.

echo "Never Echoes"

exit 99
#!/bin/bash

shopt -s cdspell
#shopt changes shell options on the fly
# cdspell will automatically correct directory names

cd /hpme
pwd
#!/bin/bash

. data/source.data

echo $f_name
echo $l_name
echo $age
#/bin/bash

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

exec echo "Exiting \"$0\" at line $LINENO."
# exec opens a new shell process to execute the command.

echo "Never Echoes"

exit 99

( cd /some/other/dir && echo $(pwd) )
#open a second directory. returns to current directory after subshell ends


