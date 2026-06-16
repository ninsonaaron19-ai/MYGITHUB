#include <iostream>

int main() {
    int number;

    // Prompt the user for an integer
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // A number is a power of 2 if it is greater than 0 AND (number & (number - 1)) equals 0
    if (number > 0 && (number & (number - 1)) == 0) {
        std::cout << number << " is a power of 2." << std::endl;
    } else {
        std::cout << number << " is not a power of 2." << std::endl;
    }

    return 0;
}
