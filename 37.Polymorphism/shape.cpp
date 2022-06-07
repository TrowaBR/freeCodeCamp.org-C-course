#include <iostream>
#include "shape.h"

Shape::Shape(std::string_view description_param)
    : m_description(description_param)
{
}

Shape::~Shape() {
    std::cout << "~Shape::" << m_description << std::endl;
}

void Shape::draw() const {
    std::cout << "Shape::draw: Drawing " << m_description << std::endl;
}