#include <iostream>
#include <string>

int main() {
    std::string userInput;

    // Read a single word from the user
    std::cin >> userInput;

    // Compare strings using the equality operator
    if (userInput == "hello") {
        std::cout << "Hello!" << std::endl;
    } else {
        std::cout << "Goodbye!" << std::endl;
    }

    return 0;
}
