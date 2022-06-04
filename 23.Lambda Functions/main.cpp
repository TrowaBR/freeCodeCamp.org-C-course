#include <iostream>

void lambdaFromVar() {
    // Assigning into a variable
    auto func = [](){
            std::cout << "Hello World!" << std::endl;
        };

    func();
    func();
}

void lambdaDirectCall() {
    // Direct call
    [](){
            std::cout << "Hello World!" << std::endl;
        }();
}

void lambdaWithParams() {
    // Call with parameters
    [](double a, double b){
        std::cout << "a + b = " << (a + b) << std::endl;
    }(12.1,5.7);
}

void lambdaWithReturn() {
    auto result = [](double a, double b){
        return (a + b);
    }(12.1,5.7);
    std::cout << "result: " << result << std::endl;
}

void lambdaWithReturnType() {
    auto result = [](double a, double b) -> int{
        return (a + b);
    }(12.1,5.7);
    std::cout << "result: " << result << std::endl;
}

void capturingByValue() {
    int c {42};
    
    auto func = [c](){
            std::cout << "Inner value: " << c << std::endl;
        };
    
    for (size_t i{}; i < 5; ++i) {
        std::cout << "Outer value: " << c << std::endl;
        func();
        ++c;
    }
}

void capturingByReference() {
    int c {42};
    
    auto func = [&c](){
            std::cout << "Inner value: " << c << std::endl;
        };
    
    for (size_t i{}; i < 5; ++i) {
        std::cout << "Outer value: " << c << std::endl;
        func();
        ++c;
    }
}

void capturingAllByValue() {
    int a {13};
    int b {24};
    
    auto func = [=](){
            std::cout << "Inner values | a: " << a << " | b: " << b << std::endl;
        };
    
    for (size_t i{}; i < 5; ++i) {
        std::cout << "Outer values | a: " << a << " | b: " << b << std::endl;
        func();
        ++a;
        ++b;
    }
}

void capturingAllByReference() {
    int a {13};
    int b {24};
    
    auto func = [&](){
            std::cout << "Inner values | a: " << a << " | b: " << b << std::endl;
        };
    
    for (size_t i{}; i < 5; ++i) {
        std::cout << "Outer values | a: " << a << " | b: " << b << std::endl;
        func();
        ++a;
        ++b;
    }
}

int main() {
    /* Lambda function syntax ("-> returnType" is optional)
     *
     * [capture list] (parameters) -> returnType {
     *     // Function body
     * }
     * 
     * */

    lambdaFromVar();
    lambdaDirectCall();
    lambdaWithParams();
    lambdaWithReturn();
    lambdaWithReturnType();

    capturingByValue();
    capturingByReference();
    capturingAllByValue();
    capturingAllByReference();

    return 0;
}