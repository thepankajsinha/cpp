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

class Cat : public Animal
{
public:
    void sound()
    { // overriding without 'override' keyword
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *a;

    Dog d;
    Cat c;

    a = &d;
    a->sound(); // Output: Dog barks

    a = &c;
    a->sound(); // Output: Cat meows

}
