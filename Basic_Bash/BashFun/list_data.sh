#!/bin/bash

if [ ! -f /var/log/user_up_time.log ]
then
	touch /var/log/user_up_time.log
fi

echo `date`
echo `uptime`
echo `users`

date >> /var/log/user_up_time.log
uptime >> /var/log/user_up_time.log
users >> /var/log/user_up_time.log
