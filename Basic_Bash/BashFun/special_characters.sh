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

