#include <iostream>
#include "shape.h"

Shape::Shape(std::string_view description_param)
    : m_description(description_param)
{
}

void Shape::draw() const {
    std::cout << "Shape::draw: Drawing " << m_description << std::endl;
}