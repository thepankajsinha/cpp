//problem-statement:

//when two or more classes inherit from the same base class, and another class inherits from those derived classes
//this is called diamond problem...where the compiler gets confused about which base class to use to 
//access the base class members or methods

#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "Class A" << endl;
    }
};

class B : virtual public A{};

class C : virtual public A{};

class D : public B, public C{};

int main(){
    D obj;
    obj.show(); // ✅ No ambiguity now
}

// Output: Class A

//When we use virtual keyword then only one copy of the base class(class A) is created
//and the derived class can access the base class members or methods without any ambiguity.