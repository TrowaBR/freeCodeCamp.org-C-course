#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>

class Shape {
    public :
        Shape() = default;
        Shape(std::string_view description_param);

        virtual void draw() const; // "virtual" costs 8 bytes
    protected :
        std::string m_description{};
};

#endif // SHAPE_H