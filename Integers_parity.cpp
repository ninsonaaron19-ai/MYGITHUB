#include <iostream>

int main() {
    int number;

    // Prompt the user for input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is odd using the modulus operator
    // An integer is odd if its remainder when divided by 2 is not equal to 0
    if (number % 2 != 0) {
        std::cout << "Odd number" << std::endl;
    } else {
        std::cout << "Even number" << std::endl;
    }

    return 0;
}
