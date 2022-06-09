#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main() {
    Shape* p_shape;
    double surface;

    p_shape = new Rectangle(10, 10, "rect1");
    surface = p_shape->surface();

    std::cout << "Surface of p_shape(" << typeid(*p_shape).name() << "): " << surface << std::endl;

    delete p_shape;

    p_shape = new Circle(10, "circle1");
    surface = p_shape->surface();

    std::cout << "Surface of p_shape(" << typeid(*p_shape).name() << "): " << surface << std::endl;

    delete p_shape;

    return 0;
}