/*
 * Program to Square a number taken from the user
 */

#include <iostream>   
#include <cmath>    

int main() {

    int num{};  

    // Prompt the user to enter a number
    std::cout << "Enter a Number: ";
    std::cin >> num;  

    // Define a lambda function to calculate the square of a given number
    auto square = [](int number) -> int
    {
        return std::pow(number, 2);  // Use the pow function from cmath to calculate the square
    };

    // Display the result: the square of the user-entered number
    std::cout << "Square of " << num << " is " << square(num);

    return 0;  
}
