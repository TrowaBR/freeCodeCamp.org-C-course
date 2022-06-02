#include <iostream>

// Function
consteval int get_value() {
    return 3;
}

int main() {
    // Output text
    std::cout << "Hello world!" << std::endl;

    // Output function
    std::cout << "get_value() = " << get_value() << std::endl;

    // Input string
    int age;
    std::string name;
    std::cout << "Please fill the requested data." << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin,name);
    std::cout << "Age: ";
    std::cin >> age;
    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    return 0;
}