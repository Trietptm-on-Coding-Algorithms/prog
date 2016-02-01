#!/bin/sh bash

#variables to test
var_string="i am a string"
var_equal_string="i am a string"

var_num1=1
var_num2=2


#simple if
if [[ "$var_string" = 'i am a string' ]]
then
	echo "Simple if is true"
fi

#simple if_else
if [ $var_num1 -eq $var_num2 ]
then
	echo "This will never print"
else
	echo "Else is true"
fi

if [[ "$var_equal_string" != "$var_string" ]]
then
	echo "This will never print"
elif [[ "$var_num1" -lt "$varnum1" ]]
then
	echo "This will never print"
else
	echo "Else if"
fi

case "$variable" in
	'') echo 'empty' ;;
	'*') echo 'start' ;;
esac
! true
	#not operator

for f in $(ls -1 .); do
	echo $f
done
