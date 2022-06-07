#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main() {

    Shape* p_shape{};
    Shape shape1("Shape1");
    Oval oval1("Oval1", 2.0, 3.5);
    Circle circle1("Circle1", 3.3);

    // Call with pointer
    std::cout << std::endl;
    std::cout << "Calling methods through pointer:" << std::endl;
    Shape *shape_collection[]{&shape1, &oval1, &circle1};
    for (Shape *p_shape : shape_collection) {
        p_shape->draw();
    }

    // Call with reference
    std::cout << std::endl;
    std::cout << "Calling methods through reference:" << std::endl;
    Shape& shape_ref1 = shape1; shape_ref1.draw();
    Shape& shape_ref2 = oval1; shape_ref2.draw();
    Shape& shape_ref3 = circle1; shape_ref3.draw();

    // Without pointer or reference, compiler will slice children data
    std::cout << std::endl;
    std::cout << "Data slicing for not using pointer/reference:" << std::endl;
    Shape shapes[]{shape1, oval1, circle1};
    for (Shape s : shapes) {
        s.draw();
    }

    return 0;
}