#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    
    friend void swap(Number& a, Number& b);

    void display() const {
        std::cout << value << std::endl;
    }
};


void swap(Number& a, Number& b) {
    a.value = a.value + b.value;
    b.value = a.value - b.value;
    a.value = a.value - b.value;
}

int main() {
    Number num1(10);
    Number num2(20);

    std::cout << "Before swap:" << std::endl;
    std::cout << "num1 = ";
    num1.display();
    std::cout << "num2 = ";
    num2.display();

    swap(num1, num2);

    std::cout << "After swap:" << std::endl;
    std::cout << "num1 = ";
    num1.display();
    std::cout << "num2 = ";
    num2.display();

    return 0;
}

