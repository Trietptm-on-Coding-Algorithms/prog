#!/bin/bash
if [ -z $1 ] &&
	[ -z $2 ]
then
	echo "Enter args"
fi

arr[0]="-1"
port_counter=0

for index in `seq $1 $2 `
do

	count=`( echo open -a 192.168.1.1 $index; sleep 1; echo quit;) | telnet | grep -c Connected`
	if [[ $count -gt 0 ]]
	then
		arr[port_counter]=$index
		port_counter=`expr $port_counter + 1`
	fi
done

echo ${arr[@]}
		
