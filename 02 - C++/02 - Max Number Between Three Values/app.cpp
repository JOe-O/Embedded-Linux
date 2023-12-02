/*
 *  Write a program to find the maximum number between three values
 */

#include <iostream>
#include <algorithm>

int main() {

    // Using an array to find the maximum value
    int arr[] = {1,89,2};
    std::cout <<"max value in array: " << *(std::max_element(std::begin(arr),std::end(arr))) << std::endl;

    
    // Using variables to find the maximum value
    int a=10,b=20,c=35;
    std::cout <<"max value in a,b,c: " << std::max({a,b,c});
    

    return 0;
}


