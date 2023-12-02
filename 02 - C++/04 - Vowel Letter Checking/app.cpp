/*
 *  Program to check whether a letter is a vowel or not.
 */
#include <iostream>
#include <algorithm>

int main() {
    // Array of vowels to check against
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    // Variable to store user input
    char input{};
    
    // Prompting user for input
    std::cout << "Enter a Letter: "; 
    std::cin >> input;
    
    // Convert input to lowercase for case-insensitive comparison
    input = std::tolower(input);

    // Using std::find to search for the input in the array of vowels
    char * foundAt = std::find(std::begin(vowels), std::end(vowels), input);
    
    // Checking if the input is found in the array
    if (foundAt != std::end(vowels)) {
        // If found, output the position in the array
        std::cout << "The letter is a vowel and found at position: " << std::distance(vowels, foundAt) + 1;
    } else {
        // If not found, output that the letter is not a vowel
        std::cout << "The letter is not a vowel.";
    }

    return 0;
}
