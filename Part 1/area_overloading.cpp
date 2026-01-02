#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;


double calculateArea(double length, double breadth) {
    return length * breadth;
}


double calculateArea(double base, double height, bool isTriangle) {
    if (isTriangle) {
        return 0.5 * base * height;
    }
    return 0.0;
}


double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double length, breadth, base, height, radius;

    
    length = 10.0;
    breadth = 5.0;
    std::cout << "Area of the rectangle: " << calculateArea(length, breadth) << std::endl;

    
    base = 10.0;
    height = 5.0;
    std::cout << "Area of the triangle: " << calculateArea(base, height, true) << std::endl;

    
    radius = 7.0;
    std::cout << "Area of the circle: " << calculateArea(radius) << std::endl;

    return 0;
}

