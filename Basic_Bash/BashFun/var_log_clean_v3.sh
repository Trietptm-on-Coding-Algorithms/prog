#!/bin/bash


LOG_DIR=/var/log
ROOT_UID=0
LINES=50
E_XCD=86
E_NOTROOT=87

if [ "$UID" -ne "$ROOT_UID" ]
then
	echo "Must be root to run this script."
	exit $E_NOTROOT
fi

if [ -n "$1" ]
#Test for a command line argument
then
	lines=$1
else
	lines=$LINES #Default
fi

#E_WRONGARGS=85
#
#case "$1" in
#""	) lines=50;;
#*[!0-9]*) echo "Usage: `basename $0` lines-to-cleanup";
#	exit $E_WRONGARGS;;
#	) lines=$1;;
#esac
#
#

cd $LOG_DIR

if [ `pwd` != "$LOG_DIR" ] #	if [ "$PWD" != "$LOG_DIR" ]
then
	echo "Cant change to $LOG_DIR."
	exit $E_XCD
fi

# cd /var/log || {
#	echo "Cannot change to necessary directory." >&2
#	exit $E_XCD;
#}

tail -n $lines messages > mesg.temp
mv mesg.temp messages

# cat /dev/null > messages

cat /dev/null > wtmp # ':> wtmp' and '> wtmp' have the same effect
echo "Log files cleaned up."

exit 0
