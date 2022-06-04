#include <iostream>
#include <string_view>

class Dog {
    public :
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);
        ~Dog();

        void print_info();
        void set_dog_name(std::string_view name);
        Dog* set_dog_breed(std::string_view breed);
        Dog& set_dog_age(int age);
    private :
        std::string name{};
        std::string breed{};
        int *p_age{};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param) {
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
}

Dog::~Dog() {
    delete p_age;
    p_age = nullptr;
    std::cout << "Dog destructor called for " << name << " at " << this << std::endl;
}

void Dog::print_info() {
    std::cout << "Dog (" << this << "): [ name: " << name << " | breed: " << breed << " | age: " << *p_age << " ]" << std::endl;
}

void Dog::set_dog_name(std::string_view name) {
    this->name = name; // "this" can be used to separate private vars from params
}
Dog* Dog::set_dog_breed(std::string_view breed) {
    this->breed = breed;
    return this;
}
Dog& Dog::set_dog_age(int age) {
    *(this->p_age) = age;

    return *this;
}

int main() {
    // Release will be on the reverse order
    Dog dog1("Fluffy","Shepherd",2);

    dog1.print_info();
    dog1.set_dog_breed("Wire Fox Terrier")-> // Chained calls using pointers
         set_dog_age(4).                     // Chained calls using references
         set_dog_name("Pumba");
    dog1.print_info();

    return 0;
}