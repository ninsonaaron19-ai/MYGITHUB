#include <iostream>

int main() {
    int num1, num2;

    // Prompt the user for two integers
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Use the ternary operator to determine the larger number
    int larger = (num1 > num2) ? num1 : num2;

    // Print the result
    std::cout << "The larger number is: " << larger << std::endl;

    return 0;
}
