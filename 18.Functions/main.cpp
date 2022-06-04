#include <iostream>

// Function with a single parameter and no result
void enter_bar(unsigned int age) { // Function parameters
    if (age >= 18) {
        std::cout << "You're " << age << " years old. Please proceed." << std::endl;
    } else {
        std::cout << "Sorry, you're too young for this. No offence!" << std::endl;
    }
    return; // Not necessary when function returns "void"
}

void funcSingleParamNoResult() {
    std::cout << "Calling enter_bar(22):" << std::endl;
    enter_bar(22); // Function arguments
    enter_bar(18);
    enter_bar(17);
}

// Function with multiple parameters and result
int max(const int a, const int b) {
    if (a > b)
        return a;
    else
        return b;
}

void funcMultParamResult() {
    std::cout << "max(10,20): " << max(10,20) << std::endl;
    std::cout << "max(100,20): " << max(100,20) << std::endl;
}

// Function with no parameter and no result
void say_hello() {
    std::cout << "Hello there" << std::endl;
    return; // Not necessary when function returns "void"
}

void funcNoParamNoResult() {
    say_hello();
}

// Function with no parameter, but with result
int lucky_number() {
    return 99;
}

void funcNoParamResult() {
    std::cout << "lucky_number: " << lucky_number() << std::endl;
}

// Parameters are copies of the outside values
double increment_multiply(double a, double b) {
    return ((++a) * (++b)); // ++ wont change outside variables
}

void changesInsideFunc() {
    double a {3.0};
    double b {4.0};
    double result = increment_multiply(a,b);

    std::cout << "result: " << result << std::endl;
    std::cout << "increment_multiply(a,b): " << increment_multiply(a,b) << std::endl;
    std::cout << "increment_multiply(a,b): " << increment_multiply(a,b) << std::endl;
    std::cout << "increment_multiply(a,b): " << increment_multiply(a,b) << std::endl;
}

// Function declaration (prototype)
int min(const int a, const int b);
int min(const int, const int); // Can be duplicated, does not need parameter names

void funcDeclDefition() {
    std::cout << "min(10,20): " << min(10,20) << std::endl;
    std::cout << "min(100,20): " << min(100,20) << std::endl;
}

// Function definition
int min(const int a, const int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    funcSingleParamNoResult();
    funcMultParamResult();
    funcNoParamNoResult();
    funcNoParamResult();
    changesInsideFunc();
    funcDeclDefition();

    return 0;
}