#include <iostream>
#include "circle.h"

Circle::Circle(std::string_view description_param, double radius_param)
    : Oval(description_param, radius_param, radius_param)
{
}

Circle::~Circle() {
    std::cout << "~Circle::" << m_description << std::endl;
}

void Circle::draw() const {
    std::cout << "Circle::draw: Drawing " << m_description <<
                           ": [ radius: " << get_x_radius() << " ]" << std::endl;
}