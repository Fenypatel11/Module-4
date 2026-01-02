#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    
    void setCompany(const std::string &company) {
        this->company = company;
    }

    
    std::string getCompany() const {
        return company;
    }

    
    void setModel(const std::string &model) {
        this->model = model;
    }

    
    std::string getModel() const {
        return model;
    }

    
    void setYear(int year) {
        this->year = year;
    }

    
    int getYear() const {
        return year;
    }
};

int main() {
   
    Car car;

    
    car.setCompany("Toyota");
    car.setModel("Fortuner");
    car.setYear(2023);

    
    std::cout << "Company: " << car.getCompany() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;

    return 0;
}

