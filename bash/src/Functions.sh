#!/bin/bash

function1 () #no arguments. Access args with $1
{
	return 5
}

function1 
echo $?

caller 0
