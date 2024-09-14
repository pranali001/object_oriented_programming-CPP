#include<iostream>
#include<string>
using namespace std;
//The destructor frees up resources (like memory) that were used during the object’s lifetime.
It’s automatically called when the object is destroyed, and is important when using dynamic memory or other resources that need manual cleanup.
// Constructor: it is automatically called when an object is created.
// If we don't create a constructor, the compiler automatically creates it.
// Constructor has the same name as the class and doesn't have a return type.
// It is only called once (automatically) at the time of object creation.
// Memory allocation happens when the constructor is called.

class Teacher {
private:
    double salary;
public:
    // Properties or attributes
    string *name;
    string *dept;
    string *subject;

    // Non-parameterized constructor
    /*Teacher(){
        cout << "Hi, I am a constructor!!" << endl;
    }*/

    // Parameterized constructor
    Teacher(string n, string d, string s) {
        name = new string(n);  // dynamically allocated memory
        dept = new string(d);
        subject = new string(s);
        cout << "Parameterized Constructor called for " << *name << endl;
    }

    // Custom copy constructor (deep copy)
    Teacher(const Teacher &t) { // & is pass by reference (the copy of the original object)
        name = new string(*(t.name));
        dept = new string(*(t.dept));
        subject = new string(*(t.subject));
        salary = t.salary;
        cout << "Copy constructor called." << endl;
    }

    // Parameterized constructor with salary
    Teacher(string n, string d, string s, double sal) {
        name = new string(n);  // dynamically allocated memory
        dept = new string(d);
        subject = new string(s);
        salary = sal;

        cout << "Parameterized Constructor with salary called for " << *name << endl;
    }

    // Destructor
    ~Teacher() {
        // Free the dynamically allocated memory
        delete name;
        delete dept;
        delete subject;
        cout << "Destructor called, memory released." << endl;
    }

    // Method to change department
    void changeDept(string newDept) {
        *dept = newDept;
    }

    // Method to print object information
    void getInfo() {
        cout << "Name: " << *name << endl;
        cout << "Department: " << *dept << endl;
        cout << "Subject: " << *subject << endl;
    }
};

int main() {
    /*Teacher obj1; //constructor called for obj1
    Teacher obj2; //constructor called for obj2
    obj1.name= "Pranali";
    obj1.dept = "data science";
    obj1.subject = "Python";
    obj1.setsalary(20000);
    cout << "Name: " << obj1.name << " Dept: " << obj1.dept << " Subject: " << obj1.subject << " Salary: " << obj1.getsalary();
    // Salary is a private member, it cannot be accessed directly.*/

    // Creating object using parameterized constructor
    Teacher obj3("Shradha", "Computer science", "C++");
    obj3.getInfo();

    // Creating object using copy constructor
    Teacher obj4(obj3);
    obj4.getInfo();

    // Destructor will be called automatically for obj3 and obj4 when they go out of scope
    return 0;
}
