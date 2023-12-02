/*
 *  Program to convert between decimal and binary representations.
 */
#include <iostream>
#include <bitset>

int main() {
    // Variable to store decimal input and binary string
    int dec{};
    std::string binString;

    // Convert Decimal to Binary
    std::cout << "Enter a Decimal Number: "; std::cin >> dec;
    std::bitset<8> Dec_to_binary(dec);
    std::cout << "Binary Representation: " << Dec_to_binary << std::endl;

    // Convert Binary to Decimal
    std::cout << "Enter a Binary String: "; std::cin >> binString;
    std::bitset<8> Binary_to_dec(binString);
    std::cout << "Decimal Representation: " << Binary_to_dec.to_ulong();

    return 0;
}
