#include <iostream>

int main() {
    const size_t COUNT{10};

    int *p_int { new int[COUNT]{} }; // NO std::size | NO range loop
    if (p_int) {
        for (size_t i{}; i < COUNT; ++i) {
            std::cout << "p_int[" << i << "]: " << p_int[i] << std::endl;
        }
    }

    delete []p_int;
    p_int = nullptr;

    return 0;
}