#include<iostream>
#include<string>
using namespace std;
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
