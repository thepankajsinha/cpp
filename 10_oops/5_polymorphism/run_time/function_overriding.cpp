//Here, print method is present in both the base and child class and when we called the print method using child object c1 then it execute child class print method.


#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "I am Base Function" << endl;
    }
};

class Child : public Base {
   public:
    void print() {
        cout << "I am child Function" << endl;
    }
};

int main() {
    Child c1;
    c1.print(); //I am child Function

    //How to access override base function
    //Method 1:
    Base b1;
    b1.print();  //I am Base Function

    //Method 2:
    c1.Base::print();  //I am Base Function

}