#include <iostream>
#include <string>
#include <cstring>

// Blueprint for a function
// The real function is created when you call the template
template <typename T> T maximum(T a, T b); // Copying arguments
template <> const char* maximum<const char*>(const char* a, const char* b); // Specialized template

template <typename T> const T &minimum(const T &a, const T &b); // Referencing arguments

template <typename T> T incr_mult(T &a, T &b);

int main() {
    int x{5};
    int y{7};
    double a{5.5};
    double b{78.7};
    std::string str1{"Hello"};
    std::string str2{"World"};
    const char *char1{"wild"};
    const char *char2{"animal"};
    
    std::cout << "maximum(x,y): " << maximum(x,y) << std::endl;
    std::cout << "maximum(a,b): " << maximum(a,b) << std::endl;
    std::cout << "maximum<int>(a,b): " << maximum<int>(a,b) << std::endl; // Explicit "int" template
    std::cout << "maximum(str1,str2): " << maximum(str1,str2) << std::endl;

    std::cout << "minimum(x,y): " << minimum(x,y) << std::endl;
    std::cout << "minimum(a,b): " << minimum(a,b) << std::endl;
    std::cout << "minimum<int>(a,b): " << minimum<int>(a,b) << std::endl;
    std::cout << "minimum(str1,str2): " << minimum(str1,str2) << std::endl;

    std::cout << "incr_mult(x,y): " << incr_mult(x,y) << std::endl;
    std::cout << "incr_mult(x,y): " << incr_mult(x,y) << std::endl;
    std::cout << "incr_mult(x,y): " << incr_mult(x,y) << std::endl;

    std::cout << "maximum(char1,char2): " << maximum(char1,char2) << std::endl;

    return 0;
}

template <typename T> T maximum(T a, T b) {
    return (a > b) ? a : b;
}
template <> const char* maximum(const char* a, const char* b) {
    return (std::strcmp(a,b) > 0) ? a : b;
}

template <typename T> const T &minimum(const T &a, const T &b) {
    return (a < b) ? a : b;
}

template <typename T> T incr_mult(T &a, T &b) {
    return ((++a) * (++b));
}