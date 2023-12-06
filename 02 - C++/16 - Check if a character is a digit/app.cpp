/*
 * Program to check if a character is a digit
 */

#include <iostream>

int main()
{
    char c;
    
    // Prompt the user to enter a character
    std::cout << "Please Enter a Character : ";
    std::cin >> c;

    // Check if the entered character is a digit using the isdigit function
    (std::isdigit(c)) ? std::cout << "Character is a digit." : std::cout << "Character is not a digit.";

    return 0; 
}
