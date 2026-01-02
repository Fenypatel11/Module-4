#include <iostream>


template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    double dbl1 = 3.5, dbl2 = 8.9;
    char char1 = 'A', char2 = 'B';

    
    std::cout << "Before swapping:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swap(num1, num2);
    std::cout << "After swapping:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    
    std::cout << "Before swapping:" << std::endl;
    std::cout << "dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << std::endl;
    swap(dbl1, dbl2);
    std::cout << "After swapping:" << std::endl;
    std::cout << "dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << std::endl;

    
    std::cout << "Before swapping:" << std::endl;
    std::cout << "char1 = " << char1 << ", char2 = " << char2 << std::endl;
    swap(char1, char2);
    std::cout << "After swapping:" << std::endl;
    std::cout << "char1 = " << char1 << ", char2 = " << char2 << std::endl;

    return 0;
}

