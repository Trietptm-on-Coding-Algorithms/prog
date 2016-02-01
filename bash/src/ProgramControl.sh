#!/usr/bin/env bash

kernel=$(uname)
	#above syntax give the information from stdout
	
echo $? #exit status of last executed command
echo $$ #current process id
(echo $$; echo $?) # command group that starts a subshell
