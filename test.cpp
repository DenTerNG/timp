#include <iostream>

bool isDivisibleBy5(int number) {
    return number % 5 == 0;
}

void testIsDivisibleBy5() {
    if (!isDivisibleBy5(10)) {
        std::cerr << "Error: 10 is divisible by 5, but isDivisibleBy5 returned false." << std::endl;
    }
    if (!isDivisibleBy5(15)) {
        std::cerr << "Error: 15 is divisible by 5, but isDivisibleBy5 returned false." << std::endl;
    }
    if (isDivisibleBy5(11)) {
        std::cerr << "Error: 11 is not divisible by 5, but isDivisibleBy5 returned true." << std::endl;
    }
    // Add more tests as needed
}

int main() {
    testIsDivisibleBy5();
    return 0;
}
