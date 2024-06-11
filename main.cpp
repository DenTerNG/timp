#include <iostream>

bool isDivisibleBy5(int number) {
    return number % 5 == 0;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isDivisibleBy5(number)) {
        std::cout << "The number is divisible by 5." << std::endl;
    } else {
        std::cout << "The number is not divisible by 5." << std::endl;
    }

    return 0;
}
