#!/usr/bin/env bash

kernel=$(uname)
	#above syntax give the information from stdout
	
echo $? #exit status
echo $$ #process id
(echo $$; echo $?) # command group that starts a subshell
