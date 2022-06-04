#include <iostream>
#include <string_view>

int max(const int a, const int b) {
    std::cout << "[max-int] ";
    return (a > b) ? a : b;
}

double max(const double a, const double b) {
    std::cout << "[max-dbl] ";
    return (a > b) ? a : b;
}

std::string_view max(const std::string_view &a, const std::string_view &b) {
    std::cout << "[max-str] ";
    return (a > b) ? a : b;
}

int main() {
    int int1 {41};
    int int2 {29};

    double dbl1 {27.2};
    double dbl2 {55.01};

    std::string_view str1 {"Hello"};
    std::string_view str2 {"World"};

    std::cout << "max(" << int1 << "," << int2 << "): "         << max(int1, int2)   << std::endl;
    std::cout << "max(5,7): "                                   << max(5, 7)         << std::endl;
    std::cout << "max(" << dbl1 << "," << dbl2 << "): "         << max(dbl1, dbl2)   << std::endl;
    std::cout << "max(\"" << str1 << "\",\"" << str2 << "\"): " << max(str1, str2)   << std::endl;
    std::cout << "max(\"dog\",\"cat\"): "                       << max("dog", "cat") << std::endl;

    return 0;
}