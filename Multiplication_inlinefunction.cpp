#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}


inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    
    std::cout << "Enter two numbers to multiply: ";
    std::cin >> num1 >> num2;

    
    std::cout << "Multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << std::endl;

    
    std::cout << "Enter a number to find its cubic value: ";
    std::cin >> num1;

    
    std::cout << "Cubic value of " << num1 << " is " << cube(num1) << std::endl;

    return 0;
}

