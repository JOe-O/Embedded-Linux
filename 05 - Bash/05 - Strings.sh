#!/bin/bash

str1="lorem ipsum"
str2="lorem not ipsum"

echo ${#str1} #prints length of string

if [[ "$str1" = "$str2" ]]; then
    echo "both are equal"
elif [[ "$str1" != "$str2" ]]; then
    echo "not equal"
else
    echo "dead code"

fi

x="hello"
y="Hello"

echo sliced string x: "${x:0:3}"

if [[ "$x" > "$y" ]]; then
    echo "$x is greater than $y"
else
    echo "$x is less than $y"
fi

str3=""

if [[ -n $str3 ]]; then #checks for a non zero(not empty) string
    echo "not empty"
elif [[ -z $str3 ]]; then #checks for a zero string 
    echo "empty string"
fi