#include <iostream>
#include <string>
using namespace std;
void fun(){
    static int x=0; // if it not declared with static keyword it will only print 0 on every function call but with the help of static keyword function are created and initialised once for the lifetime of the program.
    cout<<"x: "<<x<<endl;
    x++;
}
class A{ 
    public:
     int x;
    void incX(){
        x=x+1;
    }
};
  int main(){  
    fun();
    fun();
    fun();
    A obj;
    A obj2; 
    obj.x=100;
    obj2.x=200;
    cout<<obj.x<<endl;
    obj.incX();
    cout<<obj.x<<endl;
    return 0;
}