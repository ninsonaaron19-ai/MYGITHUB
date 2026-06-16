#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

// Function to convert binary string to a decimal integer
// Returns -1 if the input is invalid
long long binaryToDecimal(const std::string& binary) {
    long long decimalValue = 0;
    long long base = 1;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimalValue += base;
        } else if (binary[i] != '0') {
            return -1; // Invalid binary digit
        }
        base *= 2;
    }
    return decimalValue;
}

int main() {
    std::string binaryInput;

    // Prompt the user for input
    std::cout << "Enter a binary number: ";
    std::cin >> binaryInput;

    // Convert to decimal first as a base conversion step
    long long decimalResult = binaryToDecimal(binaryInput);

    // Validate the input
    if (decimalResult == -1 || binaryInput.empty()) {
        std::cout << "Error: Invalid binary number entered." << std::endl;
        return 1;
    }

    // Convert decimal to Hexadecimal and Octal using stream manipulators
    std::stringstream hexStream, octStream;
    
    // std::hex converts numerical value to hexadecimal format
    hexStream << std::uppercase << std::hex << decimalResult;
    
    // std::oct converts numerical value to octal format
    octStream << std::oct << decimalResult;

    // Print all conversion results
    std::cout << "\n--- Conversion Results ---" << std::endl;
    std::cout << "Decimal:     " << decimalResult << std::endl;
    std::cout << "Octal:       " << octStream.str() << std::endl;
    std::cout << "Hexadecimal: " << hexStream.str() << std::endl;

    return 0;
}
