#!/bin/bash

exec echo "Exiting \"$0\" at line $LINENO."
# exec opens a new shell process to execute the command.

echo "Never Echoes"

exit 99
