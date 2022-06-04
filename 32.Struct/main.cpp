#include <iostream>

class Dog { // private by default
    public :
        std::string m_name;
};

struct Cat { // Public by default
    public :
        std::string m_name;
};

// "record"
struct Point {
    double x;
    double y;
};

int main() {

    Dog dog1;
    Cat cat1;
    Point p1;

    dog1.m_name = "Fluffy";
    cat1.m_name = "Juny";
    p1.x = 40.4;
    p1.y = 2.7;

    std::cout << "dog1.m_name: " << dog1.m_name << std::endl;
    std::cout << "cat1.m_name: " << cat1.m_name << std::endl;
    std::cout << "p1: [ x: " << p1.x << ", y: " << p1.y << " ]" << std::endl;

    return 0;
}