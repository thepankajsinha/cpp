#include <iostream>
using namespace std;

// base class
class A{
public:
    void show(){
        cout << "I am base clas." << endl;
    }
};

// child class (derived from class A)
class B : public A{
public:
    void display(){
        cout << "I am child class derived from class A."<<endl;
    }
};

// furtehr child class(derived from class B)
class C : public B{
    public:
    void print(){
        cout << "I am child class derived from class B."<<endl;
    }
};

int main(){
    C obj;
    obj.print();  
    obj.display(); //Accessing class B method
    obj.show();   //Accessing class A method
}

// I am child class derived from class B.
// I am child class derived from class A.
// I am base clas.