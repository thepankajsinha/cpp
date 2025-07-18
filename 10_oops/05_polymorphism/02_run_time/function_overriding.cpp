#include <iostream>
using namespace std;

class Animal{
public:
    virtual void sound(){ // virtual function in base class
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal{
public:
    void sound()
    { // same function name as base class, overriding it
        cout << "Dog barks" << endl;
    }
};

int main()
{   

    Animal* ptr = new Dog(); // base class pointer to derived class object
    ptr->sound(); // Output: Dog barks
}
