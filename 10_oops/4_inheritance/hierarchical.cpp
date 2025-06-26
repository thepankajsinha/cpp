#include <iostream>
using namespace std;

//base class 
class A{
public:
    void show(){
        cout << "I am base class"<<endl;
    }
};

//first child class(Derived from class A)
class B : public A{
public:
    void display(){
        cout<<"I am First child class."<<endl;
    }
};


//Second child class(Derived from class A)
class C : public A{
public:
    void display(){
        cout<<"I am Second child class."<<endl;
    }
};



int main(){
    B obj1; //Creating first child class obj
    obj1.show();  //Output: I am base class

    C obj2;  //Creating second child class obj
    obj2.show();  //Output: I am base class   
}
