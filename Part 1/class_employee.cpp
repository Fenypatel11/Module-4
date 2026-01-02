#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    
    Employee(const std::string &name, int employeeID, double initialSalary)
        : name(name), employeeID(employeeID), salary(initialSalary) {}

    
    void setSalary(double performanceRating) {
        if (performanceRating < 0 || performanceRating > 1) {
            std::cerr << "Error: Performance rating must be between 0 and 1." << std::endl;
            return;
        }

        
        salary = salary * (1 + performanceRating);
    }

   
    double getSalary() const {
        return salary;
    }

    
    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    
    Employee emp1("Dev", 123, 50000.0);

   
    std::cout << "Initial employee details:" << std::endl;
    emp1.display();

    
    double performanceRating;
    std::cout << "Enter performance rating (0 to 1): ";
    std::cin >> performanceRating;
    emp1.setSalary(performanceRating);

    
    std::cout << "Updated employee details after performance review:" << std::endl;
    emp1.display();

    return 0;
}

