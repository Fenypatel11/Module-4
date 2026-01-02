#include <iostream>
#include <string>

using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    
    Person(string n = "", int a = 0) : name(n), age(a) {}

    
    void readPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

   
    void writePerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Marks {
protected:
    int math;
    int science;
    int english;

public:
    
    Marks(int m = 0, int s = 0, int e = 0) : math(m), science(s), english(e) {}

    
    void readMarks() {
        cout << "Enter marks in Math: ";
        cin >> math;
        cout << "Enter marks in Science: ";
        cin >> science;
        cout << "Enter marks in English: ";
        cin >> english;
    }

    
    void writeMarks() const {
        cout << "Marks in Math: " << math << endl;
        cout << "Marks in Science: " << science << endl;
        cout << "Marks in English: " << english << endl;
    }
};


class Student : public Person, public Marks {
private:
    string rollNo;

public:
    
    Student(string n = "", int a = 0, string r = "", int m = 0, int s = 0, int e = 0)
        : Person(n, a), Marks(m, s, e), rollNo(r) {}

    
    void readStudent() {
        readPerson();
        cout << "Enter roll number: ";
        cin >> rollNo;
        readMarks();
    }

   
    void writeStudent() const {
        writePerson();
        cout << "Roll Number: " << rollNo << endl;
        writeMarks();
    }
};

int main() {
    
    Student student;

   
    cout << "Enter student details:" << endl;
    student.readStudent();
    cout << "\nStudent Mark Sheet:" << endl;
    student.writeStudent();

    return 0;
}

