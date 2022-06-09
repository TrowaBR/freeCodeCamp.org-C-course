#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>

class Shape { // Is an abstract class because of pure virtual functions
    protected:
        Shape() = default;
        Shape(std::string_view description);
    public :    
        virtual ~Shape() = default;

        //Pure virtual functions
        virtual double perimeter() const = 0;
        virtual double surface() const = 0;
    private : 
        std::string m_description;
};

#endif // SHAPE_H