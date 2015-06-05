#!/usr/bin/env bash


echo -e "Enter your Name:  \c"
read fname
echo "Hello $fname"


a=5
b=6
c=$(expr "$a" \* "$b")
echo "$a*$b = $c"

#!/bin/bash

#comment

echo hello; echo there
#semicolo seperates lines

case "$variable" in
	'') echo 'empty' ;;
	'*') echo 'start' ;;
esac

. data/source.data
#shortcut for source
vari="Variable"
"$vari" #changes variable to value
'$vari' #preserves the string with no changes
let "t2 = ((a=9, 15/3))"
	#comma seperates arithmetic operations returning the last

echo \\ #escaping the escape

kernel=`uname`
	#backquotes give the information to a command
	
:
	#colon is a no operation. useful as a placeholder
: > data.xxx
	# equivalent to touch

! True
	#not operator

echo $? #exit status
echo $$ #process id
(echo $$; echo $?) # command group that starts a subshell

arr=(1 2 3 4)

cat {file1,file2,file3} > combined_file

{ echo I am Anon;
		echo but you still know my variables;
		$anon="Nobody"; }
[] #test expression
[[]] #flexible test expression

#!/bin/bash


#all variables are represented as strings
#strings are casted into numbers in the appropriate circumstances



variable1=abcABC123456


#substring

#variables are not escaped inside of single quotes
echo 'Full string = $variable1' 
#variables are escaped inside of ""
echo "Full string =  $variable1" 

#substring example
echo 'Substring = ${variable1:3}'
echo "Substring = ${variable1:3}"

#more substring examples
echo 'Substring = ${variable1: -3}'
echo "Substring = ${variable1: -3}"

#general form of ${string:pos:length}
echo 'Substring = ${variable1:6:6}'
echo "Substring = ${variable1:6:6}"
#!/bin/bash

T1="foo"
T2="bar"

echo $T1
echo $T2

