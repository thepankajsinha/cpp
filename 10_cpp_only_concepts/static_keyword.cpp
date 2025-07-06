#include <bits/stdc++.h>
using namespace std;

class Student{
    string name;
    static int count; //static data member declaration

public:
    Student(){
            count ++;
    }
    static void getCount(){  //static member function to access static data member
        cout<<count;
    } 
};

int Student::count =0; //static data member initialization outside of class

int main(){
    Student s1, s2, s3;
    Student::getCount(); 
}

//Output: 3

// Static Data Member -
// It is a class variable that is shared by all objects of the class.
// It must be defined and initialized outside the class definition.

// Static Member Function -
// It is used to access static data member
// It can be called without creating an object of the class.