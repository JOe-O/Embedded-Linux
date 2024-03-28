#!/bin/bash

#there are two ways of assigning an array which are as follows:
arr=(3 "java" "python" "html" "css")
declare -a arr2=(1 2 "javascript" "Rust")

#we can use the '@' wildcard to print all array elements at once
echo "${arr[@]}"
echo "${arr2[@]}"

#another way to print the elements is by using for loop
for i in "${arr[@]}"; do 
    echo "$i"
done

#to print the index along with each element we use the '!' wildcard
for i in "${!arr2[@]}";do
    echo "$i" - "${arr2[i]}"
done

#we can also print the number of elements in an array by using the '#' wildcard
echo "the length of arr2 is ${#arr2[@]}"

#to delete an element we use the "unset" keyword. 
#deleting an element doesn't make the one next to it take its place, 
#it will be turned into an empty string and the rest of the elements will be in their same place
echo arr before: "${arr[@]}"
unset "arr[0]"
echo arr after: "${arr[@]}"
echo index 0 after unsetting : "${arr[0]}"


#slicing an array works the same way as for strings
slicedArray=("${arr2[@]:0:2}")
echo sliced arr2: "${arr2[@]:0:2}"
echo "${slicedArray[@]}"

#we can also create maps or dictionaries in bash script using the "declare" 
#keyword with a "-A" option and providing the key:value pairs of the map

declare -A dict=([username]=john [password]=pass)

echo username is : "${dict[username]}"
echo password is : "${dict[password]}"