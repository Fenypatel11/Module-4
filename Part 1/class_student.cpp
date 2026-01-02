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


class Student : public Person {
protected:
    float percentage;

public:
    
    Student(string n = "", int a = 0, float p = 0.0) : Person(n, a), percentage(p) {}

    
    void readStudent() {
        readPerson();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    
    void writeStudent() const {
        writePerson();
        cout << "Percentage: " << percentage << endl;
    }
};


class Teacher : public Person {
protected:
    float salary;

public:
    
    Teacher(string n = "", int a = 0, float s = 0.0) : Person(n, a), salary(s) {}

    
    void readTeacher() {
        readPerson();
        cout << "Enter salary: ";
        cin >> salary;
    }

    
    void writeTeacher() const {
        writePerson();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    
    Student student;
    Teacher teacher;

    
    cout << "Enter student details:" << endl;
    student.readStudent();
    cout << "\nStudent details:" << endl;
    student.writeStudent();

    
    cout << "\nEnter teacher details:" << endl;
    teacher.readTeacher();
    cout << "\nTeacher details:" << endl;
    teacher.writeTeacher();

    return 0;
}

