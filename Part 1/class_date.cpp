#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    
    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

   
    int daysInMonth(int month, int year) const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(year) ? 29 : 28;
            default:
                return 0; 
        }
    }

public:
    
    Date(int day = 1, int month = 1, int year = 2000)
        : day(day), month(month), year(year) {}

    
    bool setDate(int day, int month, int year) {
        if (month < 1 || month > 12 || day < 1 || day > daysInMonth(month, year)) {
            std::cerr << "Error: Invalid date." << std::endl;
            return false;
        }
        this->day = day;
        this->month = month;
        this->year = year;
        return true;
    }

    
    int getDay() const {
        return day;
    }

    
    int getMonth() const {
        return month;
    }

    
    int getYear() const {
        return year;
    }

    
    bool isValid() const {
        if (month < 1 || month > 12 || day < 1 || day > daysInMonth(month, year)) {
            return false;
        }
        return true;
    }

    
    void display() const {
        if (isValid()) {
            std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
        } else {
            std::cout << "Invalid date" << std::endl;
        }
    }
};

int main() {
    
    Date date1;

   
    if (date1.setDate(29, 2, 2020)) { 
        date1.display();
    }

    
    if (!date1.setDate(31, 4, 2023)) { 
        date1.display();
    }

    
    Date date2(31, 12, 2021); 
    date2.display();

    
    std::cout << "Day: " << date2.getDay() << std::endl;
    std::cout << "Month: " << date2.getMonth() << std::endl;
    std::cout << "Year: " << date2.getYear() << std::endl;

    return 0;
}

