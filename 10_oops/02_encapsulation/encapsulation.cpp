#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    int age;     // private data member
    string name; // private data member

public:
    // public method to set data
    void setData(string n, int a){
        name = n;
        age = a;
    }

    // public method to get data
    void getData(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1; // create an object of Student class
    s1.setData("Alice", 20); // set data using public method
    s1.getData(); // display data using public method
}

// Output: Name: Alice, Age: 20