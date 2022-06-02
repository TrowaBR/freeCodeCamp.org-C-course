#include <iostream>

void pointerDeclaration() {
    int *p_int_var {}; // Will initialize with nullptr
    int *p_int_var2 {nullptr};

    int number1 {43};
    int *p_number1 {&number1}; // & = address

    std::cout << "number1: " << number1 << " (address: " << p_number1 << ")" << std::endl;

    // Dereferencing a pointer
    std::cout << "Pointer: " << p_number1 << " (value: " << *p_number1 << ")" << std::endl;
}

void pointerToChar() {
    const char *p_message {"Hello World!"};

    std::cout << "Pointer: " << p_message << " (value: " << *p_message << ")" << std::endl;
}

int main() {
    pointerDeclaration();
    pointerToChar();

    return 0;
}