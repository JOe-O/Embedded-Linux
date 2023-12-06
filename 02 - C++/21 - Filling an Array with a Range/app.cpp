/*
 * Filling an array with a range of values from 10 to 10000
 */

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

int main()
{
    // Declare an array of integers with a size of 9991 elements
    std::array<int, static_cast<int>(9991)> arr;

    // Use std::iota to fill the array with a range of values from 10 to 10000
    std::iota(arr.begin(), arr.end(), 10);

    // Print the contents of the array
    for (auto &i : arr)
    {
        std::cout << i << "\t";
    }


    return 0;
}
