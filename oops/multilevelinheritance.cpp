#include<iostream>
#include<string>
using namespace std;
//This is a multilevel level inheritance. it inherts the property from the prevoius class level by level
class person{ //Parent  or Base class
    public:
    string name;//class member
    int age; //class member
};
class student: public person{ //Child or Derived class
    public:
    int rollno;
    void getInfo(){
        cout<<"Name: "<<name<<endl; //this is inherited from person class
         cout<<"Age: "<<age<<endl;
          cout<<"Rollno: "<<rollno<<endl;
    }
};
class Gradstudent: public student{// here the name is inherited from the student class
    public:
    string researcharea;
};
int main(){
    Gradstudent s1;
    s1.name="Pranali";
    s1.researcharea="Physics";
    s1.age=22;
    s1.rollno=74;
    
    cout<<"Name: "<< s1.name<<endl;
    cout<<"researcharea: "<< s1.researcharea<<endl;
}
    
