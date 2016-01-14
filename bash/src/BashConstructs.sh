#!/bin/bash

#shopt changes shell options on the fly
shopt -s cdspell

# cdspell will automatically correct directory names. Only works in interactive
#cd /hpms

#The period is shorthand for sourcing.
#It brings all variables from another script into the current scope
#The line directly below this is useful for finding the dir where a script is stored
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
. $DIR/data/source.data

echo $f_name $l_name $age

#open a second directory. returns to current directory after subshell ends
( cd /home && echo $(pwd) )
echo $(pwd)


# exec opens a new shell process to execute the command.
exec echo "Exiting \"$0\" at line $LINENO."

echo "Never Echoes"

exit 99


