#include <iostream>
using namespace std;

int operate(int a, int b) {
    return a + b;
}


double operate(double a, double b) {
    return a + b;
}


int operate(int a, int b, char op) {
    if (op == '-') {
        return a - b;
    }
    return 0; 
}


double operate(double a, double b, char op) {
    if (op == '-') {
        return a - b;
    }
    return 0.0; 
}


int operate(int a, int b, int c) {
    return a * b;
}


double operate(double a, double b, double c) {
    return a * b;
}


int operate(int a, int b, double d) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero." << std::endl;
        return 0; 
    }
}


double operate(double a, double b, double d, char op) {
    if (b != 0.0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero." << std::endl;
        return 0.0; 
    }
}

int main() {
    int intA = 10, intB = 5;
    double doubleA = 10.5, doubleB = 5.5;

    
    std::cout << "Addition of integers: " << operate(intA, intB) << std::endl;
    std::cout << "Addition of doubles: " << operate(doubleA, doubleB) << std::endl;

    
    std::cout << "Subtraction of integers: " << operate(intA, intB, '-') << std::endl;
    std::cout << "Subtraction of doubles: " << operate(doubleA, doubleB, '-') << std::endl;

    
    std::cout << "Multiplication of integers: " << operate(intA, intB, 0) << std::endl;
    std::cout << "Multiplication of doubles: " << operate(doubleA, doubleB, 0.0) << std::endl;

    
    std::cout << "Division of integers: " << operate(intA, intB, 0.0) << std::endl;
    std::cout << "Division of doubles: " << operate(doubleA, doubleB, 0.0, '/') << std::endl;

    return 0;
}

