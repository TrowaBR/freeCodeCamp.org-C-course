#include <iostream>

void allocDynamicMem() {
    int *p_num { new int };

    *p_num = 77;
    std::cout << "p_num: " << p_num << " (value: " << *p_num << ")" << std::endl;

    delete p_num;
    p_num = nullptr;
}

void danglingPointer() {
    // Uninitialized pointer
    int *p_int1 {}; // Solution: Always initialize with nullptr

    if (p_int1 != nullptr) {
        std::cout << "p_int1: " << p_int1 << " (value: " << *p_int1 << ")" << std::endl;
    } else {
        std::cout << "p_int1: invalid address" << std::endl;
    }

    // Deleted pointer
    int *p_int2 { new int };
    delete p_int2;
    p_int2 = nullptr; // Solution: Clear pointer after delete

    if (p_int2 != nullptr) {
        std::cout << "p_int2: " << p_int2 << " (value: " << *p_int2 << ")" << std::endl;
    } else {
        std::cout << "p_int2: invalid address" << std::endl;
    }

    delete p_int2; // It is safe to call delete on nullptr

    // Multiple pointers to the same address | Solution: validate master pointer (?)
    int *p_int_master { new int };
    int *p_int3 { p_int_master };
    delete p_int_master;
    p_int_master = nullptr; // Solution: Clear pointer after delete

    if (p_int_master) { // Compact nullptr check
        std::cout << "p_int3: " << p_int3 << " (value: " << *p_int3 << ")" << std::endl;
    } else {
        std::cout << "p_int3: invalid address" << std::endl;
    }
}

void memAllocFailure() {
    // Exception
    int *data { new int[10000000000000000]}; // Program immediately terminate

    // Catching exception
    try {
        for (size_t i = 0; i < 100000000000; ++i) {
            int* lotsOfInts { new int[10000000]};
        }
    } catch(const std::exception& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    // Ignoring exception on "new"
    for (size_t i = 0; i < 1000; ++i) {
        int* lotsOfInts2 { new(std::nothrow) int[10000000]};

        if (lotsOfInts2 == nullptr) {
            std::cout << "Memory allocation failed" << std::endl;
        }
    }
}

int main() {
    allocDynamicMem();
    danglingPointer();
    memAllocFailure();

    return 0;
}