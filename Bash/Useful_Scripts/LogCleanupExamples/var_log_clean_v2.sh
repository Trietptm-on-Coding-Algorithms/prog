#!/bin/bash

LOG_DIR=/var/log

cd $LOG_DIR

cat /dev/null > wtmp

echo "Logs cleaned up"

exit	#an exit will return the status of the previously executed command

