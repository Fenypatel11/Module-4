#include <iostream>
using namespace std;


class Calculator {
private:
    double num1, num2;

public:
    
    Calculator(double a, double b) : num1(a), num2(b) {}

    
    double add() const {
        return num1 + num2;
    }

    
    double subtract() const {
        return num1 - num2;
    }

    
    double multiply() const {
        return num1 * num2;
    }

   
    double divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }
};

int main() {
    double a, b;

    
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    
    Calculator calc(a, b);

    
    std::cout << "Addition: " << calc.add() << std::endl;
    std::cout << "Subtraction: " << calc.subtract() << std::endl;
    std::cout << "Multiplication: " << calc.multiply() << std::endl;
    std::cout << "Division: " << calc.divide() << std::endl;

    return 0;
}

