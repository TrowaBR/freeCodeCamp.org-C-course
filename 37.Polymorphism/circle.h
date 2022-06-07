#ifndef CIRCLE_H
#define CIRCLE_H

#include "oval.h"

class Circle final : public Oval {
    public :
        Circle() = default;
        Circle(std::string_view description_param, double radius_param);
        virtual ~Circle();

        void draw() const override final; // "virtual" costs 8 bytes
};

#endif // CIRCLE_H