#include <iostream>
#include <string>

int main() {
    std::string userInput;

    // Prompt the user for input
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    // Replicating 'in' behavior using the string find() method
    if (userInput.find('a') != std::string::npos) {
        std::cout << "Contains 'a'" << std::endl;
    } else {
        std::cout << "Does not contain 'a'" << std::endl;
    }

    return 0;
}
