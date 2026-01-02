#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    
    Base() : privateVar(1), protectedVar(2), publicVar(3) {}

    
    int getPrivateVar() const {
        return privateVar;
    }

    
    int getProtectedVar() const {
        return protectedVar;
    }
};


class Derived : public Base {
public:
    
    void display() {
       
        std::cout << "protectedVar: " << protectedVar << std::endl;

        
        std::cout << "publicVar: " << publicVar << std::endl;

       
        std::cout << "privateVar (via getter): " << getPrivateVar() << std::endl;
    }
};

int main() {
    Derived d;
    d.display();
    std::cout << "publicVar (direct access): " << d.publicVar << std::endl;
    return 0;
}

