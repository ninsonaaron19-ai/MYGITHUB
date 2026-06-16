#include <iostream>

int main() {
    int firstValue;
    int secondValue;

    // Read two integers from the user
    std::cin >> firstValue >> secondValue;

    // Check if the first value is equal to the second
    if (firstValue == secondValue) {
        std::cout << "Values are equal" << std::endl;
    } else {
        std::cout << "Second value is greater" << std::endl;
    }

    return 0;
}
