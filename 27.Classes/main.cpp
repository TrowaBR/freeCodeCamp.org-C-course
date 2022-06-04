#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public :
        // Constructors
        Cylinder(double radius_param, double height_param) {
            base_radius = radius_param;
            height = height_param;
        }

        Cylinder() = default; // Request the default empty constructor

        // Functions (methods)
        double volume() {
            return area() * height;
        }

    private :
        // Member variables
        double base_radius {1};
        double height {1};

        double area() {
            return PI * base_radius * base_radius;
        }
};

int main() {

    Cylinder obj1; // Object
    Cylinder obj2(10,4);
    std::cout << "obj1.volume: " << obj1.volume() << std::endl;
    std::cout << "obj2.volume: " << obj2.volume() << std::endl;

    return 0;
}