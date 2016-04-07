#!/bin/bash

# Author: Freddie Vargus (github.com/FreddieV4)
# Purpose: Automatically pushes changes to repo when post-challenges.py is run
# Sends text to owner to notify about changes

git pull

git add -A; git commit -m "Add this weeks challenges"; git push

read -r line < ../mynumber.txt

echo "Repo Successfully Updated" | .././twilio-sms.sh -c /.twiliorc/config $line
