#!/bin/bash

# echo "Hello world"

# name="Joe"

# echo "Hello this is ${name} Here"

# printf "Hiiii %s \n" $name

# echo "Enter the user name: "

# # read -p "name is " promtName

# # echo "Entered Name is $promtName" 

# if [ 1 -eq 1 ]
# then
# echo "correct answer"

# fi
# set -x
echo "hello world"
name="joe"
num=5
((num++))
# num2=$((1+2))
echo "$name"
echo hi ${name}{1..3}
echo $num

printf "hello %s\n" $name 


# read -p $'this is a promt, \nenter a value: ' value

# read value2

# echo "the value is $value"
# echo "unpromted value is $value2"
# if [ "$value" -eq $num ] 
# then
# echo "value is equal to num"
# else 
# echo "valus is not equal to num"
# fi

if [ -z "$name" ] #checks for empty strings or zero strings
then
echo empty string
elif [ -n "$name" ]
then
echo not empty
fi

for i in 1 2 3 4 5 6; do 
echo $i
done

for i in {1..4}; do
echo
 "$i"
done

command=$(ls)

for i in $command; do
echo "$i"
done

x=1

until [[ $x -gt 10 ]]; do
echo $x
((x++))
done

y=1

while [[ $y -lt 5 ]]; do
echo $y
((y++))
done
