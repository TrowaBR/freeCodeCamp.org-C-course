#include <iostream>  // Standard library
#include "compare.h" // Custom library | Include (preprocessor) directive
#include "operations.h"


int main() {
    std::cout << "max(34,56): " << max(34,56) << std::endl;
    std::cout << "min(146,23): " << min(146,23) << std::endl;
    std::cout << "incr_mult(4.0, 5.0): " << incr_mult(4.0, 5.0) << std::endl;

    return 0;
}