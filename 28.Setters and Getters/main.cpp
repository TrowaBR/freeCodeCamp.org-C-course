#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    private :
        // Member variables
        double base_radius {1};
        double height {1};

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

        double area() {
            return PI * base_radius * base_radius;
        }

        double get_base_radius() {
            return base_radius;
        }

        double get_height() {
            return height;
        }

        void set_base_radius(double radius_param) {
            base_radius = radius_param;
        }

        void set_height(double height_param) {
            height = height_param;
        }
};

int main() {

    Cylinder obj1(10,10);
    std::cout << "obj1.volume: " << obj1.volume() << " | Radius: " << obj1.get_base_radius() << " | Height: " << obj1.get_height() << std::endl;
    obj1.set_base_radius(100);
    std::cout << "obj2.volume: " << obj1.volume() << " | Radius: " << obj1.get_base_radius() << " | Height: " << obj1.get_height() << std::endl;

    return 0;
}