/*
 * Summing range of values in a vector
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    // Create a vector of integers with a size of 10 elements
    std::vector<int> vec(10);

    // Use std::iota to fill the vector with a range of values from 1 to 10
    std::iota(vec.begin(), vec.end(), 1);

    // Calculate the sum of the values in the vector using std::accumulate
    int sum = std::accumulate(vec.begin(), vec.end(), 0);

    // Print the contents of the vector
    for (auto i : vec)
    {
        std::cout << i << " ";
    }

    // Print the sum of the values in the vector
    std::cout << std::endl << "Sum: " << sum;


    return 0;
}
