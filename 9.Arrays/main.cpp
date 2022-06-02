#include <iostream>

void arrayDeclaration() {
    int scores[10];

    //scores[11] = 300; // Careful with boundaries!

    // Write data
    for (size_t i{0}; i < 10; ++i) {
        scores[i] = i * 3;
    }

    // Read data
    for (size_t i{0}; i < 10; ++i) {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    // Declare and initialize array
    double salaries[] {12.7, 7.5, 13.2, 8.1, 9.3};

    // Range based for loop
    std::cout << "salaries:";
    for (double salary : salaries) {
        std::cout << " " << salary << " ";
    }
    std::cout << std::endl;
}

void arraySize() {
    int scores[] {10,12,15,11,18,17,22,23,24};
    int count;

    count = std::size(scores); // C++17
    //count = sizeof(scores) / sizeof(scores[0]); // Prior to C++17
    for (size_t i{0}; i < count; ++i) {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }
}

void arrayChar() {
    char message1[5] {'H','e','l','l','o'};       // Incorrect
    char message2[6] {'H','e','l','l','o', '\0'}; // null terminated character
    char message3[6] {'H','e','l','l','o'};       // '\0' autofilled
    char message4[] {"Hello"}; // Includes null array

    std::cout << "Message1: " << message1 << " (size: " << sizeof(message1) << ")" << std::endl;
    std::cout << "Message2: " << message2 << " (size: " << sizeof(message2) << ")" << std::endl;
    std::cout << "Message3: " << message3 << " (size: " << sizeof(message3) << ")" << std::endl;
    std::cout << "Message4: " << message4 << " (size: " << sizeof(message4) << ")" << std::endl;
}

int main() {
    arrayDeclaration();
    arraySize();
    arrayChar();

    return 0;
}