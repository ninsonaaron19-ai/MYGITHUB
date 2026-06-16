#include <iostream>

int main() {
    int a, b;

    // Prompt the user for two integers
    std::cout << "Enter value for variable a: ";
    std::cin >> a;
    std::cout << "Enter value for variable b: ";
    std::cin >> b;

    std::cout << "\nBefore swap: a = " << a << ", b = " << b << std::endl;

    // XOR swap algorithm
    a = a ^ b; // Step 1
    b = a ^ b; // Step 2
    a = a ^ b; // Step 3

    std::cout << "After swap:  a = " << a << ", b = " << b << std::endl;

    return 0;
}
