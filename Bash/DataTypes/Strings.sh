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
