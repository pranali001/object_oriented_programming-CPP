#include<iostream>
#include<string>
using namespace std;
//inheritance is used for code reusability.
//when properties and member functions of base class are passed on to the derived class.
//This is also a single level inheritance.
class person{ //Parent  or Base class
    public:
    string name;//class member
    int age; //class member
    /*constructor*/  
  /*  person(string name, int age){ //parameters of constructor
        this->name = name;//Since both the parameter and the class member have the same name (name and age), using this-> helps differentiate between them.
        this->age = age;
    }*/
    person(){
        cout<<"Parent constructor\n"; //because it is inherited to the student that's why its get called first then student constructor is called
    }
    ~person(){
        cout<<"Destructor is called!\n";
    }
};
class student: public person{ //Child or Derived class
    public:
    int rollno;
    void getInfo(){
        cout<<"Name: "<<name<<endl;
         cout<<"Age: "<<age<<endl;
          cout<<"Rollno: "<<rollno<<endl;
    }
    student(){
        cout<<"Child constructor\n";
    }
    ~student(){// This is opposite of construtor here the derived class destructor is called first then base class
        cout<<"Destructor2 is called\n";
    }
};
int main(){
    student s1;
    s1.name="Pranali";
    s1.age=22;
    s1.rollno=74;
    
    s1.getInfo();
}
    
