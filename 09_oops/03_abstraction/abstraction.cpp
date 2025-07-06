#include <iostream>
using namespace std;

//base class
class Base {
   public:

    // pure virtual Function
    virtual void show() = 0;
};

// Derived class
class Child : public Base {
   public:
    void show(){
        cout<<"I am pure virtual function.";
    }
};


int main() {
    //child object is created
    Child obj;

    //Calling pure virtual function
    obj.show();
}

//Output: I am pure virtual function.

// Abstract class -> Here, Base is abstract class.
// Pure virtual function -> Here, show() is a pure virtual function.