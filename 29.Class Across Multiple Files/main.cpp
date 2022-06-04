#include <iostream>
#include "cylinder.h"

int main() {

    // Stack object
    Cylinder obj1(10,10);
    std::cout << "obj1.volume: " << obj1.volume() << std::endl;
    obj1.set_base_radius(100);
    std::cout << "obj1.volume: " << obj1.volume() << std::endl;

    // Heap object
    Cylinder *p_obj2 = new Cylinder(100,2);
    std::cout << "p_obj2.volume: " << (*p_obj2).volume() << std::endl;
    std::cout << "p_obj2.volume: " << p_obj2->volume() << std::endl; // "->" Point access location
    delete p_obj2;
    p_obj2 = nullptr;

    return 0;
}