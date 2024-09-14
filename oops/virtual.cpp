#include <iostream>
#include <string>
using namespace std;
class shape{ //abstract class 
    virtual void draw()=0; //pure virtual function. here we can;t make an object of virtual class it just gives the bluprint.
};
class circle: public shape{ // here we can access or can make the function draw.
    public:
    void draw(){
        cout<<"Drawing a circle\n";
    }
};
  int main(){  
    circle c1;
    c1.draw();
    return 0;
}