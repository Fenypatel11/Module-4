#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    
    bool isEquilateral() const {
        return (side1 == side2 && side2 == side3);
    }

    // Function to determine if the triangle is isosceles
    bool isIsosceles() const {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    
    bool isScalene() const {
        return (side1 != side2 && side1 != side3 && side2 != side3);
    }
};

int main() {
    
    Triangle triangle1(5.0, 5.0, 5.0); 
    Triangle triangle2(3.0, 4.0, 4.0); 
    Triangle triangle3(4.0, 5.0, 6.0); 

    
    std::cout << "Triangle 1 is " << (triangle1.isEquilateral() ? "Equilateral" : "not Equilateral") << std::endl;
    std::cout << "Triangle 1 is " << (triangle1.isIsosceles() ? "Isosceles" : "not Isosceles") << std::endl;
    std::cout << "Triangle 1 is " << (triangle1.isScalene() ? "Scalene" : "not Scalene") << std::endl;

    std::cout << "Triangle 2 is " << (triangle2.isEquilateral() ? "Equilateral" : "not Equilateral") << std::endl;
    std::cout << "Triangle 2 is " << (triangle2.isIsosceles() ? "Isosceles" : "not Isosceles") << std::endl;
    std::cout << "Triangle 2 is " << (triangle2.isScalene() ? "Scalene" : "not Scalene") << std::endl;

    std::cout << "Triangle 3 is " << (triangle3.isEquilateral() ? "Equilateral" : "not Equilateral") << std::endl;
    std::cout << "Triangle 3 is " << (triangle3.isIsosceles() ? "Isosceles" : "not Isosceles") << std::endl;
    std::cout << "Triangle 3 is " << (triangle3.isScalene() ? "Scalene" : "not Scalene") << std::endl;

    return 0;
}

