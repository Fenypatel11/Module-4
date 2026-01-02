#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    std::string name;
    int age;
    std::string country;

public:
    
    void inputCricketerData() {
        std::cout << "Enter cricketer's name: ";
        std::getline(std::cin, name);
        std::cout << "Enter cricketer's age: ";
        std::cin >> age;
        std::cin.ignore(); 
        std::cout << "Enter cricketer's country: ";
        std::getline(std::cin, country);
    }

    
    void displayCricketerData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Country: " << country << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    
    void inputBatsmanData() {
        inputCricketerData();
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
        calculateAverageRuns();
    }

    
    void calculateAverageRuns() {
        
        int matchesPlayed = 10;
        averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
    }

    
    void displayBatsmanData() const {
        displayCricketerData();
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;

    
    batsman.inputBatsmanData();

   
    batsman.displayBatsmanData();

    return 0;
}

