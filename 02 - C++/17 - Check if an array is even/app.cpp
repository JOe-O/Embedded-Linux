/*
 * Program to check if all elements in an array are even.
 */
#include <iostream>
#include <vector> 
#include <algorithm>

int main()
{
    // Declare a vector named 'arr' and initialize it with some even numbers
    std::vector<int> arr = {2, 4, 6, 8, 10, 12};

    // Check if all elements in the vector are even using std::all_of and a lambda function
    if (std::all_of(arr.begin(), arr.end(), [](int element) { return element % 2 == 0; }))
    {
        std::cout << "All Elements are Even.";
    }
    else
    {
        std::cout << "All Elements are Not Even.";
    }

    return 0; 
}
