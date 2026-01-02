#include <iostream>
using namespace std;

class Base {
public:
    
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }
};


class Intermediate : public Base {
public:
    
    Intermediate() {
        std::cout << "Intermediate class constructor called." << std::endl;
    }
};


class Derived : public Intermediate {
public:
    
    Derived() {
        std::cout << "Derived class constructor called." << std::endl;
    }
};

int main() {
    
    Derived d;

    return 0;
}

