//Static Data Member
//It is a class variable that is shared by all objects of the class.
//A single copy of the static data member is created, regardless of how many objects are created.
//It must be defined and initialized outside the class definition.


//Static Member Function
//It is used to access static data member
//It can be called without creating an object of the class.

#include <iostream>
#include <string>
using namespace std;

class Student{
    string name;
    static int count; //static data member declaration

public:
    Student(string name){
            this->name = name;
            count ++;
    }
    static void getCount(){  //static member function to access static data member
        cout<<count;
    } 
};

int Student::count =0; //static data member initialization outside of class

int main(){
    Student s1("Pankaj"); //obj s1 created
    Student::getCount(); //Output: 1
    cout<<endl;

    Student s2("Rohan"); //obj s2 created
    Student::getCount(); //Output: 2
    cout<<endl;

    Student s3("Rohit"); //obj s3 created
    Student::getCount(); //Output: 3
    cout<<endl;
}