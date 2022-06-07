#ifndef OVAL_H
#define OVAL_H

#include "shape.h"

class Oval : public Shape {
    public :
        Oval() = default;
        Oval(std::string_view description_param, double x_radius_param, double y_radius_param);

        virtual void draw() const override; // "virtual" costs 8 bytes
    protected :
        double get_x_radius() const;
    private :
        double m_x_radius{0.0};
        double m_y_radius{0.0};
};

#endif // OVAL_H