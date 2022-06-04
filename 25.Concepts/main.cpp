#include <iostream>
#include <concepts>

// Concept required separated from the declaration
template <typename T>
requires std::integral<T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Concept required along the declaration
template <std::integral T>
T minimum(T a, T b) {
    return (a > b) ? a : b;
}


// Concept can be used on "auto"
std::integral auto add(std::integral auto a, std::integral auto b) {
    return a + b;
}

int main() {
    char chr1{10};
    char chr2{20};
    int int1{11};
    int int2{5};
    double dbl1{11.1};
    double dbl2{1.9};
    
    std::cout << "maximum(chr1,chr2): " << maximum(chr1,chr2) << std::endl;
    std::cout << "maximum(int1,int2): " << maximum(int1,int2) << std::endl;
    //std::cout << "maximum(dbl1,dbl2): " << maximum(dbl1,dbl2) << std::endl; // Does not satisfy the concept

    std::cout << "minimum(chr1,chr2): " << minimum(chr1,chr2) << std::endl;
    std::cout << "minimum(int1,int2): " << minimum(int1,int2) << std::endl;
    //std::cout << "minimum(dbl1,dbl2): " << minimum(dbl1,dbl2) << std::endl; // Does not satisfy the concept

    std::cout << "add(chr1,chr2): " << add(chr1,chr2) << std::endl;
    std::cout << "add(int1,int2): " << add(int1,int2) << std::endl;
    //std::cout << "add(dbl1,dbl2): " << add(dbl1,dbl2) << std::endl; // Does not satisfy the concept

    return 0;
}