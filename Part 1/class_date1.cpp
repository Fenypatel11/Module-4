#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    int zipCode;

public:
    
    Address(const std::string &street, const std::string &city, const std::string &state, int zipCode)
        : street(street), city(city), state(state), zipCode(zipCode) {}

   
    void display() const {
        std::cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << std::endl;
    }
};

class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    double marks;
    Address address;

public:
    
    Student(const std::string &name, const std::string &studentClass, int rollNumber, double marks, const Address &address)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks), address(address) {}

    
    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    
    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        address.display();
    }
};

int main() {
    
    Address addr1("123 Navrangpura", "Ahemdabad", "IND", 62704);

   
    Student student1("Harsh", "10th Grade", 101, 85.5, addr1);

    
    student1.display();

    return 0;
}

