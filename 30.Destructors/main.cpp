#include <iostream>
#include <string_view>

class Dog {
    public :
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);

        ~Dog();
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
    std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog() {
    delete p_age;
    p_age = nullptr;
    std::cout << "Dog destructor called for " << name << std::endl;
}

void some_func() {
    Dog my_dog("Fluffy","Bulldog",3);
}

/*
void func_copy_obj(Dog dog) {

}
*/

int main() {
    // Release will be on the reverse order
    Dog dog1("Doggy1","Shepherd",2);
    Dog dog2("Doggy2","Shepherd",2);
    Dog dog3("Doggy3","Shepherd",2);
    Dog dog4("Doggy4","Shepherd",2);

    some_func();
    //func_copy_obj(my_dog); // Will make a copy of the object, copying an object that creates pointers will make it release twice, generating errors

    std::cout << "Done" << std::endl;

    return 0;
}