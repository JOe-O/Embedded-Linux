/*
 *  Write a program to print the ASCII table
 */
#include <iostream>

int main() {
    // Print table header
    std::cout << "|ASCII | Char|" << std::endl;

    // Loop through ASCII values 0 to 127
    for(int i = 0 ; i < 128 ; i++)
    {
        std::cout << "| " << i << " | " << static_cast<char>(i) << " |"<< std::endl;
    }

   

    return 0;
}


