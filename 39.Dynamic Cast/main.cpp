#include <iostream>
#include "dog.h"

// Methods that isolate convertion
void do_some_feline_thingy_with_animal(Animal* p_animal_param);
void do_some_dog_thingy_with_animal(Animal* p_animal_param);

int main() {

    // Transformation for pointers
    Animal* p_animal = new Feline("stripes", "feline1");
    Feline* p_feline = dynamic_cast<Feline*>(p_animal);

    if (p_feline) {
        p_feline->do_some_feline_thingy();
    } else {
        std::cout << "p_feline is not a 'Feline'!" << std::endl;
    }

    Dog* p_dog = dynamic_cast<Dog*>(p_animal);

    if (p_dog) {
        p_dog->do_some_dog_thingy();
    } else {
        std::cout << "p_dog is not a 'Dog'!" << std::endl;
    }

    delete p_animal;
    p_animal = nullptr;
    p_feline = nullptr;
    p_dog = nullptr;

    // Transformation for references
    Feline feline = Feline("stripes", "feline1");
    Animal& animal_ref = feline;

    // Directly (cant validate nullptr)
    Feline& feline_ref = {dynamic_cast<Feline&>(animal_ref)};
    feline_ref.do_some_feline_thingy();

    // With proper checks
    Dog* p_dog_ref = {dynamic_cast<Dog*>(&animal_ref)};

    if (p_dog_ref) {
        p_dog_ref->do_some_dog_thingy();
    } else {
        std::cout << "p_dog_ref is not a 'Dog'!" << std::endl;
    }

    return 0;
}

void do_some_feline_thingy_with_animal(Animal* p_animal_param) {
    Feline* p_feline = dynamic_cast<Feline*>(p_animal_param);

    if (p_feline) {
        p_feline->do_some_feline_thingy();
    } else {
        std::cout << "p_feline is not a 'Feline'!" << std::endl;
    }
}

void do_some_dog_thingy_with_animal(Animal* p_animal_param) {
    Dog* p_dog_ref = {dynamic_cast<Dog*>(p_animal_param)};

    if (p_dog_ref) {
        p_dog_ref->do_some_dog_thingy();
    } else {
        std::cout << "p_dog_ref is not a 'Dog'!" << std::endl;
    }
}