#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string binaryString;

    // Prompt the user for input
    std::cout << "Enter a binary number: ";
    std::cin >> binaryString;

    int decimalValue = 0;
    int base = 1; // Represents 2^0 initially

    // Traverse the string from right to left
    for (int i = binaryString.length() - 1; i >= 0; i--) {
        // Validate input and check if character is '1'
        if (binaryString[i] == '1') {
            decimalValue += base;
        } else if (binaryString[i] != '0') {
            std::cout << "Error: Invalid binary digit detected!" << std::endl;
            return 1; // Exit program with error code
        }
        
        // Move to the next power of 2
        base = base * 2;
    }

    // Print the result
    std::cout << "The decimal equivalent is: " << decimalValue << std::endl;

    return 0;
}
