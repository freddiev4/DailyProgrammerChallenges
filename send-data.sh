#!/bin/bash

CHANGES="$(git diff --name-only)"

./movedirs.sh

git pull origin master; git add -A; git commit -m "Add challenge(s)"; git push

read -r line < ../mynumber.txt

echo "Repo Successfully Updated with:" $CHANGES | .././twilio-sms.sh -c /.twiliorc/config $line
