#include <iostream>

int main() {

    int num1 {45};
    int& ref_num1 = { num1 };

    std::cout << "num1    : " << num1     << " (" << &num1     << ")" << std::endl;
    std::cout << "ref_num1: " << ref_num1 << " (" << &ref_num1 << ")" << std::endl;

    num1 = 30;
    std::cout << "Changing num1 to 30." << std::endl;
    std::cout << "num1    : " << num1     << " (" << &num1     << ")" << std::endl;
    std::cout << "ref_num1: " << ref_num1 << " (" << &ref_num1 << ")" << std::endl;

    ref_num1 = 20;
    std::cout << "Changing ref_num1 to 20." << std::endl;
    std::cout << "num1    : " << num1     << " (" << &num1     << ")" << std::endl;
    std::cout << "ref_num1: " << ref_num1 << " (" << &ref_num1 << ")" << std::endl;

    return 0;
}