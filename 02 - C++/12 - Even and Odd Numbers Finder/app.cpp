/*
 * Program to separate even and odd numbers from an array
 */
#include <iostream>   
#include <algorithm>  
#include <vector>     
#include <array>     

// Function to print the elements of a container (vector in this case)
void print_container(const std::vector<int>& c) {
    for (int i : c)
        std::cout << i << ' ';
}

int main() {
    // Initializing an array with integer values
    std::array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Lambda function to separate even and odd numbers from the array
    auto evenOdd = [&]() {
        std::vector<int> even;
        std::vector<int> odd;

        // Loop through the array and categorize numbers as even or odd
        for (int n : arr) {
            (n % 2) ? odd.push_back(n) : even.push_back(n);
        }

        // Printing the even and odd vectors
        std::cout << "Even : ";
        print_container(even);
        std::cout << std::endl << "Odd : ";
        print_container(odd);
    };

    // Calling the lambda function to separate even and odd numbers
    evenOdd();

    return 0;
}
