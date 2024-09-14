// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int rollno;
    
};
class teacher {
    public:
    string subject;
    double salary;
    
};
class TA :public student, public teacher{ //The name attribute is inherited from the student class, and the subject attribute is inherited from the teacher class. which is called as multiple inheritance.
    public:
    string researcharea;
    
};
int main() {
    TA t1;
    t1.name="Pranali";
    t1.subject="Statistics";
    
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}