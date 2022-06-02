#include <iostream>
#include <limits>
#include <cmath>

void limitsLibrary() {
    std::cout <<                     "'short' range is from " << std::numeric_limits<         short>::min() << " to " << std::numeric_limits<         short>::max() << std::endl;
    std::cout <<            "'unsigned short' range is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout <<                       "'int' range is from " << std::numeric_limits<           int>::min() << " to " << std::numeric_limits<           int>::max() << std::endl;
    std::cout <<              "'unsigned int' range is from " << std::numeric_limits<  unsigned int>::min() << " to " << std::numeric_limits<  unsigned int>::max() << std::endl;
    std::cout <<                      "'long' range is from " << std::numeric_limits<          long>::min() << " to " << std::numeric_limits<          long>::max() << std::endl;
    std::cout <<                     "'float' range is from " << std::numeric_limits<         float>::min() << " to " << std::numeric_limits<         float>::max() << std::endl;
    std::cout <<       "'float' range (with lowest) is from " << std::numeric_limits<      float>::lowest() << " to " << std::numeric_limits<         float>::max() << std::endl;
    std::cout <<      "'double' range (with lowest) is from " << std::numeric_limits<     double>::lowest() << " to " << std::numeric_limits<        double>::max() << std::endl;
    std::cout << "'long double' range (with lowest) is from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<   long double>::max() << std::endl;
}

void cmathLibrary() {
    std::cout << "Floor(7.7): " << std::floor(7.7) << std::endl;
    std::cout << "Ceil(7.7): " << std::ceil(7.7) << std::endl;
    std::cout << "Absolute(-5000): " << std::abs(-5000) << std::endl;
    std::cout << "Exp(10): " << std::exp(10) << std::endl; // f(x) = e^x    (e = 2.71828)
    std::cout << "Pow(3,4): " << std::pow(3,4) << std::endl;
    std::cout << "Log(54.59): " << std::log(54.59) << std::endl; // Reverse of "pow(e,54.59)"
    std::cout << "Log10(10000): " << std::log10(10000) << std::endl;
    std::cout << "Sqrt(81): " << std::sqrt(81) << std::endl;
    std::cout << "Round | (3.654): " << std::round(3.654) << " | (2.5): " << std::round(2.5) << " | (2.4): " << std::round(2.4) << std::endl;
}

int main() {
    limitsLibrary();
    cmathLibrary();

    return 0;
}