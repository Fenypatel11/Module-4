#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    
    Shape(double w, double h) : width(w), height(h) {}

    
    virtual double area() const = 0; 

    
    void displayDimensions() const {
        std::cout << "Width: " << width << std::endl;
        std::cout << "Height: " << height << std::endl;
    }
};

class Rectangle : public Shape {
public:
    
    Rectangle(double w, double h) : Shape(w, h) {}

    
    double area() const override {
        return width * height;
    }

    
    void displayArea() const {
        std::cout << "Area of Rectangle: " << area() << std::endl;
    }
};

int main() {
    
    double width, height;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;
    std::cout << "Enter height of the rectangle: ";
    std::cin >> height;

    Rectangle rect(width, height);

    
    rect.displayDimensions();

    
    rect.displayArea();

    return 0;
}

