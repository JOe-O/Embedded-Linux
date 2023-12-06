/*
 * Program to check if any element in an array is even.
 */

#include <iostream>
#include <vector> 
#include <algorithm>

int main()
{
    // Declare a vector named 'arr' and initialize it with some numbers
    std::vector<int> arr = {1,2, 3, 5, 7, 9};

    // Check if any element in the vector is even using std::any_of and a lambda function
    if (std::any_of(arr.begin(), arr.end(), [](int element) { return element % 2 == 0; }))
    {
 
        std::cout << "Array Has At Least One Even Number";
    }
    else
    {
        std::cout << "All Elements are Not Even.";
    }

    return 0; 
}
