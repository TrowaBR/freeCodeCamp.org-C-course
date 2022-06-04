#include <iostream>
#include <concepts>

// Syntax1 - Copy of another concept
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

// Syntax2 - Custom validation
template <typename T>
concept Multipliable = requires(T a, T b) {
    a * b;
};

// Syntax3 - List of validations
template <typename T>
concept Incrementable = requires(T a) {
    a+=1;
    ++a;
    a++;
};

// Nested requirements
template <typename T>
concept TinyType = requires(T a) {
    sizeof(T) <= 4;          // Simple requirement: Checks the syntax
    requires sizeof(T) <= 4; // Nested requirement: Checks if the expression is true
};

void testTinyType(TinyType auto a) {
    std::cout << "testTinyType: " << a << std::endl;
}

// Compound requirements
template <typename T>
concept Addable = requires(T a, T b) {
    {a + b} noexcept -> std::convertible_to<int>;
    // Checks if "a + b" is valid syntax
    // Ignore exceptions ("noexcept")
    // Try to convert the result to int ("std::convertible_to<int>")
};

void testAddable(Addable auto a) {
    std::cout << "testAddable: " << a << std::endl;
}

// Combining concepts
template <typename T>
requires Addable<T> && TinyType<T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int a {6};
    double d {11.1};
    char c {'A'};
    std::string x {"Hello World"};

    testTinyType(a);
    //testTinyType(d); // Error: nested requirement '(sizeof (T) <= 4)' is not satisfied
    testTinyType(c);
    //testTinyType(x); // Error: nested requirement '(sizeof (T) <= 4)' is not satisfied

    testAddable(a);
    testAddable(d);
    testAddable(c);
    //testAddable(x); // Error: '(a + b)' does not satisfy return-type-requirement

    std::cout << "add(a,a): " << add(a,a) << std::endl;
    //std::cout << "add(d,d): " << add(d,d) << std::endl; // Error: nested requirement '(sizeof (T) <= 4)' is not satisfied
    std::cout << "add(c,c): " << add(c,c) << std::endl;
    //std::cout << "add(x,x): " << add(x,x) << std::endl; // Error: '(a + b)' does not satisfy return-type-requirement
    
    return 0;
}