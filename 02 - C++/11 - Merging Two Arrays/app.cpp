/*
 * Program to demonstrate sorting and merging of vectors.
 */
#include <iostream>  
#include <algorithm>  
#include <vector>    

// Function to print the elements of a container (vector in this case)
void print_container(const std::vector<int>& c) {
    for (int i : c)
        std::cout << i << ' ';
}

int main() {
    // Initializing two vectors with integer values
    std::vector<int> vec1 = {1, 3, 2, 4, 9};
    std::vector<int> vec2 = {7, 4, 1, 1, 8};
    
    // Printing the contents of the vectors before sorting
    std::cout << "Vector 1 before sorting: ";
    print_container(vec1);
    std::cout << std::endl << "Vector 2 before sorting: ";
    print_container(vec2);

    // Sorting the vectors in ascending order
    std::sort(vec1.begin(), vec1.end());
    std::sort(vec2.begin(), vec2.end());

    // Printing a separator line
    std::cout << std::endl << "----------------------------" << std::endl;

    // Printing the contents of the vectors after sorting
    std::cout << "Vector 1 after sorting: ";
    print_container(vec1);
    std::cout << std::endl << "Vector 2 after sorting: ";
    print_container(vec2);

    // Printing another separator line
    std::cout << std::endl << "----------------------------" << std::endl;

    // Creating an empty vector to store the merged result
    std::vector<int> vec3;

    // Merging the sorted vectors into vec3
    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(vec3));

    // Printing the merged vector
    std::cout << "New Merged Vector: ";
    print_container(vec3);

    return 0;
}
