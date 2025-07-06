#include <iostream>
using namespace std;

//base class
class A{  
public:
    void show(){
        cout << "I am base class.";
    }
};

//child class (Derived from class A)
class B : public A{
    public:
    void display(){
        cout<<"I am child class.";
    }
};

int main(){
    B obj;
    obj.show(); // Accessing base class method
}

//I am base class.