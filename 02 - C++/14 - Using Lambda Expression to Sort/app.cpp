/*
 * Program to sort using lambda function
 */
#include <iostream>   
#include <algorithm>
#include <cmath>    
#include <array>

// Function to print the elements of a container (array in this case)
void print_container(std::array<int, 6>& c) {
    for (int i : c)
        std::cout << i << ' ';
}

int main() {

    std::array<int, 6> arr = {1, 4, 2, 3, 7, 5}; 

    // Sort the array in ascending order using a lambda function
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b;
    });
    
    std::cout << "Ascending Order: ";
    print_container(arr);  

    // Sort the array in descending order using a lambda function
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a > b;
    });

    std::cout << std::endl << "Descending Order: ";
    print_container(arr);  
    
    return 0;  
}
