#include <iostream>
#include "oval.h"

Oval::Oval(std::string_view description_param, double x_radius_param, double y_radius_param)
    : Shape(description_param), m_x_radius(x_radius_param), m_y_radius(y_radius_param)
{
}

void Oval::draw() const {
    std::cout << "Oval::draw: Drawing " << m_description <<
                           ": [ x_radius: " << m_x_radius << " | y_radius: " << m_y_radius << " ]" << std::endl;
}

double Oval::get_x_radius() const {
    return m_x_radius;
}