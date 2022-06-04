#include <iostream>

class Dog { // Size of an object is the size of the member variables
    public :
        void print_info() { // 0 bytes
            std::cout << "leg_count: " << leg_count << std::endl;
        }
    private :
        size_t leg_count; // size_t (8 bytes)
        int* p_age;       // pointer (8 bytes)
        std::string name{"I am the king of the universe!"}; // char* (32 bytes)
};

int main() {

    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;           // 8 bytes
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;               // 8 bytes
    std::cout << "sizeof(std::string): " << sizeof(std::string) << std::endl; // 32 bytes
    std::cout << "sizeof(Dog): " << sizeof(Dog) << std::endl;                 // 48 bytes (8 + 8 + 32)

    return 0;
}