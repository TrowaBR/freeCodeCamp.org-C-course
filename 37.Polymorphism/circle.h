#ifndef CIRCLE_H
#define CIRCLE_H

#include "oval.h"

class Circle : public Oval {
    public :
        Circle() = default;
        Circle(std::string_view description_param, double radius_param);

        virtual void draw() const override; // "virtual" costs 8 bytes
};

#endif // CIRCLE_H