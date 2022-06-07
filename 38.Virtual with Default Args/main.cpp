#include <iostream>
#include "derived.h"

int main() {

    double result;
    // Default parameters are decided at compile time, methods are called at runtime
    // Avoid default values on polimorphic classes

    // Uses the right method and right arguments
    Derived *p_derived = new Derived;
    result = p_derived->add();
    std::cout << "result(p_derived): " << result << std::endl;

    delete p_derived;
    p_derived = nullptr;

    // Uses the right method and wrong arguments
    Base *p_base = new Derived;
    result = p_base->add();
    std::cout << "result(p_base): " << result << std::endl;

    delete p_base;
    p_base = nullptr;

    return 0;
}