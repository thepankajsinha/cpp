#include <iostream>
using namespace std;

//base class
class base{
public:
    virtual void show(){
        cout << "I am base class function with virtual keyword."<<endl;
    }

    // void show(){
    //     cout << "I am base class function without virtual keyword."<<endl;
    // }
};

//child class
class child : public base{
public:
    void show(){
        cout<<"I am child class function."<<endl;
    }
};

int main(){
    //child object is created
    child obj;

    //Here, base class pointer base1 is created and it is pointing child class objecct obj.
    base* base1 = &obj;

    //calling show() using base class pointer.
    base1->show();
}
//Output:
//Without virtual keyword:
// I am base class function without virtual keyword.

//With virtual keyword:
//I am child class function.