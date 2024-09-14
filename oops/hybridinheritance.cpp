#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Person {
public:
    string name;
    int age;

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Base class 2
class Employee {
public:
    int employeeID;
    double salary;

    void displayEmployeeInfo() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class 1 (Multiple Inheritance)
class Manager : public Person, public Employee {
public:
    string department;

    void displayManagerInfo() {
        cout << "Department: " << department << endl;
    }
};

// Derived class 2 (Hierarchical Inheritance from Manager)
class AssistantManager : public Manager {
public:
    string assistantArea;

    void displayAssistantManagerInfo() {
        cout << "Assistant Area: " << assistantArea << endl;
    }
};

int main() {
    // Creating an object of AssistantManager which inherits from both Person and Employee (via Manager)
    AssistantManager am;
    
    // Setting attributes from Person, Employee, Manager, and AssistantManager
    am.name = "Pranali";       // From Person
    am.age = 30;               // From Person
    am.employeeID = 101;       // From Employee
    am.salary = 50000;         // From Employee
    am.department = "Sales";   // From Manager
    am.assistantArea = "East Region";  // From AssistantManager

    // Displaying information from all the inherited classes
    am.displayPersonInfo();             // From Person
    am.displayEmployeeInfo();           // From Employee
    am.displayManagerInfo();            // From Manager
    am.displayAssistantManagerInfo();   // From AssistantManager

    return 0;
}
