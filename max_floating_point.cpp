#include <iostream>

int main() {
    double num1, num2;

    // Prompt the user for two floating-point numbers
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;
    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;

    // Use the conditional operator to determine the larger number
    double larger = (num1 > num2) ? num1 : num2;

    // Print the result
    std::cout << "The larger number is: " << larger << std::endl;

    return 0;
}
