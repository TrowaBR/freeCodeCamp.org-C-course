#include <iostream>

const size_t COUNT {10}; // Dont hardcode, make constants

void forLoop() {
    // size_t = unsigned int

    for (size_t i{}; i < COUNT; ++i) {
        std::cout << "for i = " << i << std::endl;
    }

    // Initialization outside loop
    size_t j {};
    for (  ; j < COUNT; ++j) {
        std::cout << "for j = " << j << std::endl;
    }
}

void whileLoop() {
    size_t i {0};

    while (i < COUNT) {
        std::cout << "while i = " << i << std::endl;
        ++i;
    }
}

void doWhileLoop() {
    size_t i {11};

    do {
        std::cout << "do while i = " << i << std::endl;
        ++i;
    } while (i < COUNT);
}

int main() {
    forLoop();
    whileLoop();
    doWhileLoop();

    return 0;
}