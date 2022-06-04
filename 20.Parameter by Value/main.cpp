#include <iostream>

void say_age(int age);
void say_age_p(int *p_age);
void say_age_r(int &age);

int main() {

    int age {23};

    // Copy of the var (does not modify)
    say_age(age);
    say_age(age);
    say_age(age);

    // Pointer for the var (requires dereferencing the value)
    say_age_p(&age);
    say_age_p(&age);
    say_age_p(&age);

    // Reference for the var (same address)
    say_age_r(age);
    say_age_r(age);
    say_age_r(age);

    return 0;
}

void say_age(int age) {
    std::cout << "say_age: Hello! You are " << ++age << " years old." << std::endl;
}

void say_age_p(int *p_age) {
    std::cout << "say_age_p: Hello! You are " << ++*p_age << " years old." << std::endl;
}

void say_age_r(int &age) {
    std::cout << "say_age_r: Hello! You are " << ++age << " years old." << std::endl;
}