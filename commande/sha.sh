#!/bin/bash
if [  echo $1 == "/bin/ls" ]
then
    echo "Franchement tu es con "
else
    sha256sum $1
fi

