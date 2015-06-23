#!/usr/bin/env bash

#This script gives a high level overview of variables

#all variables are represented as strings
#strings are casted into numbers in the appropriate circumstances
a=5
b=6
c=$(expr "$a" \* "$b")
echo "$a*$b = $c"

#data can be read in using the read command
echo -e "Enter your Name:  \c"
echo -e "\e[31mStdin read is commented out \e[0m"
#read fname
#echo "Hello $fname"

let "t2 = ((a=9, 15/3))"
	#comma seperates arithmetic operations returning the last
echo "$t2"


#above syntax give the information from stdout
kernel=$(uname)
	
#substring
variable1="Hello World!"

echo -e "\e[35mSubstring demonstriation\e[0m"
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

#Arrays
arr=(1 2 3 4)
