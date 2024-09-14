#include <iostream>
#include <string>
using namespace std;
// polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
// This is also called as compile time polymorphism.
class print {
    public:
    void show(int x){ //this is called function overloading. means same function name but with different parameters.
        cout<< "int:" <<x <<endl;
    }
    void show(char ch){
        cout<<"char:" << ch <<endl;
    }
};
int main(){
    print p1;
    p1.show('&');

    return 0;
}