#include <iostream>

class Number {
private:
    int value;

public:
    
    Number(int val) : value(val) {}

    
    friend int findMax(const Number& a, const Number& b);

    void display() const {
        std::cout << value << std::endl;
    }
};


int findMax(const Number& a, const Number& b) {
    return (a.value > b.value) ? a.value : b.value;
}

int main() {
    Number num1(10);
    Number num2(20);

    std::cout << "num1 = ";
    num1.display();
    std::cout << "num2 = ";
    num2.display();

    int max = findMax(num1, num2);
    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
}

