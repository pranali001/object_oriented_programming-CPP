#include <iostream>
#include <string>
using namespace std;
// polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
// This is also called as run time polymorphism.
//function overriding : parent and child both contai the same function with different implementation. The parent classfunction is said to be overridden.
class parent {
    public:
   void  getInfo(){
        cout<< "parent class"<<endl;
    }
};
class child : public parent{ //It overrides the getInfo() method of the parent class with its own implementation, which prints "child class"
    public:
   void  getInfo(){ //In the main() function, an object c1 of the child class is created. When c1.getInfo() is called, it invokes the overridden version of getInfo() from the child class (not the parent class), and "child class" is printed.
        cout<< "child class"<<endl;
    }
};
int main(){
   child c1;
   c1.getInfo();
    return 0;
}