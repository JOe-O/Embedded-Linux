/*
 *  Program to delete a specified number from a vector using a lambda function.
 */
#include <iostream>
#include <algorithm>
#include <vector>

// Function to print the elements of a container (vector in this case)
void print_container(const std::vector<int>& c) {
    for (int i : c)
        std::cout << i << ' ';
    std::cout << '\n';
}

int main() {
    // Variable to store the value to delete
    int valueToDelete{};
    
    // Initializing a vector with integer values
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Prompting user to enter a number to delete
    std::cout << "Please Enter a Number to Delete: "; 
    std::cin >> valueToDelete;

    // Lambda function to delete the specified value from the vector
    auto del = [](auto &valueToDelete, auto &vec) {
        // Using std::find to locate the value in the vector
        auto foundAt = std::find(vec.begin(), vec.end(), valueToDelete);

        // Checking if the value is found and deleting it if present
        if (foundAt != vec.end()) {
            vec.erase(foundAt);
            std::cout << "Element " << valueToDelete << " deleted.\n";
        } else {
            std::cout << "Element " << valueToDelete << " not found.\n";
        }
    };

    // Calling the lambda function to delete the specified value
    del(valueToDelete, vec);

    // Printing the updated vector after deletion
    print_container(vec);

    return 0;
}
