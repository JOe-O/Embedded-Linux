#!/bin/bash

readonly x=12 #alternative to const in C/C++ and other languages
echo "readonly variable x is $x"

DisplayHello()
{
    echo "heyyyyyyy"
}

PrintArgs()
{
    echo "$1 $2 $3 $4 $5" 
}

add()
{
    return $(( $1 + $2 ))
}
var=5
void()
{
local var=6 #by default all the variables are global so in order to make a variable local inside of a function we use "local" keyword
echo $var
}

echo "value before: $var"
void 
echo "value after: $var"
DisplayHello

PrintArgs hey there how are you

add "$1" "$2"

result=$?

echo "the addition result is $result"

export variable="basshhh"

echo "$variable"