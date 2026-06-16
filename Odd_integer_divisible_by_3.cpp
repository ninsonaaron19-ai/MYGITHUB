#include <iostream>

int main() {
    int number;

    // Prompt the user for an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is odd AND divisible by 3
    if ((number % 2 != 0) && (number % 3 == 0)) {
        std::cout << "The number is both odd and divisible by 3." << std::endl;
    } else {
        std::cout << "The number does not meet both conditions." << std::endl;
    }

    return 0;
}
