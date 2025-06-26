#include <iostream>
using namespace std;

//first base class
class A{
public:
    void show(){
        cout << "I am first base class."<<endl;
    }
};

//second base class
class B{
public:
    void display(){
        cout<<"I am second base class."<<endl;
    }
};

//child class(Derived from base classes A and B)
class C : public A, public B{
    void print(){
        cout<<"I am child class."<<endl;
    }
};

int main(){
    C obj;  //child class object is created
    obj.show(); //Accessing first base class method
    obj.display(); //Accessing second base class method
}

// I am first base class.
// I am second base class.