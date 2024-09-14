#include<iostream>
#include<string>
using namespace std;
//Encapsulation : It is nothing but wrapping a data and member function in single unit is in class is called member function and helps in data hiding.


//Class teacher is has a properties and memeber function change dept() is wraped or bundled in class is called as encapsulation.
class Teacher{
    private:
     double salary;
   public:
   //properties or attributes
   string name;
   string dept ;
   string subject;
  

   //methods/ member/ functions 
   void changeDept(string newDept){
    dept = newDept;

   }
   //setter
   void setsalary(double s){
       salary = s;
   }
   //getter
   double getsalary(){
       return salary;
   }
   
};
int main(){
    Teacher obj1;
    obj1.name= "pranali";
    obj1.dept = "data science";
   obj1.subject = "Python";
    obj1.setsalary(20000);
    cout<<"Name:"<<" "<<obj1.name<<" "<<"Dept:"<<" "<<obj1.dept<<" "<<"Subject:"<<" "<<obj1.subject<<" "<<"Salary:"<<" "<<obj1.getsalary();
    //salary is private member it could not be accessed.
    return 0;
}
