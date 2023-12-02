/*
 *  Program to calculate and print the sum of digits of a number.
 */
#include <iostream>

int main() {
    // Variables to store user input and the sum of digits
    int num{}, sum{};

    // Prompting user to enter a number
    std::cout << "Enter a number: "; 
    std::cin >> num;

    // Loop to calculate the sum of digits
    while (num != 0) {
        // Add the last digit to the sum
        sum += num % 10;
        // Remove the last digit from the number
        num = num / 10;
    }

    // Output the calculated sum
    std::cout << "Sum = " << sum;

    return 0;
}
