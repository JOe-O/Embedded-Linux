/*
 *  Program to check if a triangle is right-angled.
 */
#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    // Array to store the three sides of the triangle
    int sides[3];
    
    // Prompting user to enter the lengths of the sides
    std::cout << "Enter side a: "; std::cin >> sides[0];
    std::cout << "Enter side b: "; std::cin >> sides[1];
    std::cout << "Enter side c: "; std::cin >> sides[2];

    // Sorting the sides in ascending order
    std::sort(std::begin(sides), std::end(sides));

    // Checking the Pythagorean theorem to determine if it's a right-angled triangle
    if (pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2)) {
        std::cout << "The triangle is right-angled.";
    } else {
        std::cout << "The triangle is not right-angled.";
    }

    return 0;
}
