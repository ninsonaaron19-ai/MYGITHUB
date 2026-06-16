#include <iostream>
#include <cctype> // Required for isupper()

int main() {
    char inputChar;

    // Prompt the user for input
    std::cout << "Enter a character: ";
    std::cin >> inputChar;

    // Check if the character is uppercase using isupper and a logical AND operator
    // The condition (inputChar != '\0') is a non-destructive way to include the logical AND
    if (std::isupper(inputChar) && (inputChar != '\0')) {
        std::cout << "Uppercase letter" << std::endl;
    } else {
        std::cout << "Not an uppercase letter" << std::endl;
    }

    return 0;
}
