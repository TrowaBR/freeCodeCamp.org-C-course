#include <iostream>

void ifCondition() {
    int n1 {55};
    int n2 {60};

    bool result = (n1 < n2);

    if (result == true) {
        std::cout << n1 << " is less than " << n2 << std::endl;
    } else {
        std::cout << n1 << " is NOT less than " << n2 << std::endl;
    }
}

// Tools
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

void elseIfCondition() {
    int tool {Ellipse};
    std::string result;

    if (tool == Pen) {
        result = "Pen";
    }
    else if (tool == Marker) {
        result = "Marker";
    }
    else if (tool == Eraser) {
        result = "Eraser";
    }
    else if (tool == Rectangle) {
        result = "Rectangle";
    }
    else if (tool == Circle) {
        result = "Circle";
    }
    else if (tool == Ellipse) {
        result = "Ellipse";
    } else {
        result = "None";
    }
    std::cout << "Active tool: " << result;
}

void switchCondition() {
    int tool {Pen};
    std::string result;

    switch (tool)
    {
        case       Pen: { result = "Pen";       } break;
        case    Marker: { result = "Marker";    } break;
        case    Eraser: { result = "Eraser";    } break;
        case Rectangle: { result = "Rectangle"; } break;
        case    Circle: { result = "Circle";    } break;
        case   Ellipse: { result = "Ellipse";   } break;
               default: { result = "None";      }
    }
    std::cout << "Active tool: " << result;
}

void ternaryOperator() {
    int max;

    int a {35};
    int b {20};

    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    std::cout << "Max(if): " << max << std::endl;

    max = (a > b) ? a : b;
    std::cout << "Max(ternary): " << max << std::endl;
}

int main() {
    ifCondition();
    elseIfCondition();
    switchCondition();
    ternaryOperator();

    return 0;
}