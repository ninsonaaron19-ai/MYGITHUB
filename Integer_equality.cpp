#include <iostream>

int main() {
    int num1, num2, num3;

    // Prompt the user for input
    std::cout << "Enter three integer values: ";
    std::cin >> num1 >> num2 >> num3;

    // Check if all three integers are equal using the equality operator
    if (num1 == num2 && num2 == num3) {
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "Not equal" << std::endl;
    }

    return 0;
}