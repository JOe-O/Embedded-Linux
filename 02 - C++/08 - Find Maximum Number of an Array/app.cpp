/*
 *  Program to find the maximum element in a std::array using a lambda function.
 */
#include <iostream>
#include <array>
#include <algorithm>

int main() {
    // Initializing a std::array with integer values
    std::array<int, 7> arr = {1, 2, 3, 5, 50, 8, 12};

    // Lambda function to find the maximum element in the array
    auto max = [](auto &arr) -> int 
    {
        return *std::max_element(std::begin(arr), std::end(arr));
    };

    // Calling the lambda function to get and print the maximum element
    std::cout << "Max element is: " << max(arr);

    return 0;
}
