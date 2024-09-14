#include <iostream>
#include <string>
using namespace std;
//both teacher and TA classes were inheriting from the base class student, not from each other or both.
// Base class
class student {
public:
    string name;
    int rollno;

    // Method to display student info
    void displayStudentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

// Derived class 1 (Inheriting from student)
class teacher : public student {
public:
    string subject;
    double salary;

    // Method to display teacher info
    void displayTeacherInfo() {
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class 2 (Inheriting from student)
class TA : public student {
public:
    string researcharea;

    // Method to display TA info
    void displayTAInfo() {
        cout << "Research Area: " << researcharea << endl;
    }
};

int main() {
    // Creating and initializing a teacher object
    teacher t1;
    t1.name = "Pranali";
    t1.rollno = 101;
    t1.subject = "Statistics";
    t1.salary = 50000;
    
    // Displaying information for the teacher
    t1.displayStudentInfo();
    t1.displayTeacherInfo();

    cout << endl;

    // Creating and initializing a TA object
    TA t2;
    t2.name = "Shradha";
    t2.rollno = 102;
    t2.researcharea = "Machine Learning";
    
    // Displaying information for the TA
    t2.displayStudentInfo();
    t2.displayTAInfo();

    return 0;
}
