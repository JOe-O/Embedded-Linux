/*
 *  Program to search for a number in a array using a function.
 */
#include <iostream>
#include <algorithm>
#include <array>

int main() {
    // Variable to store the number to search for
    int searchFor{};
    
    // Initializing a std::array with sorted integer values
    std::array<int, 5> arr = {1, 3, 5, 7, 9};
    
    // Prompting user to enter a number to search for
    std::cout << "Please Enter a Number to Search for: "; 
    std::cin >> searchFor;

    // Lambda function to perform binary search on the array
    auto fn = [](auto &searchFor, auto &arr) -> bool 
    {
        return std::binary_search(std::begin(arr), std::end(arr), searchFor);
    };

    // Checking the result of the search and printing the appropriate message
    (fn(searchFor, arr)) ? std::cout << "Value Found!" : std::cout << "Value Not Found!";

    return 0;
}
