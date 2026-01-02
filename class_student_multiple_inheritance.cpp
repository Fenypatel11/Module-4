#include <iostream>
using namespace std;


class Students {
protected:
    int rollNumber;

public:
    
    Students(int roll = 0) : rollNumber(roll) {}

    
    void readRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    
    void displayRollNumber() const {
        cout << "Roll Number: " << rollNumber << endl;
    }
};


class Test : public Students {
protected:
    float marks1, marks2;

public:
    
    Test(int roll = 0, float m1 = 0.0, float m2 = 0.0) : Students(roll), marks1(m1), marks2(m2) {}

    
    void readMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }

    
    void displayMarks() const {
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
    }
};


class Result : public Test {
public:
    
    Result(int roll = 0, float m1 = 0.0, float m2 = 0.0) : Test(roll, m1, m2) {}

   
    float totalMarks() const {
        return marks1 + marks2;
    }

    
    void displayResult() const {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks() << endl;
    }
};

int main() {
    
    Result student;

    
    cout << "Enter student details:" << endl;
    student.readRollNumber();
    student.readMarks();

    cout << "\nStudent Result:" << endl;
    student.displayResult();

    return 0;
}

