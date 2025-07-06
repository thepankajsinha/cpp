#include <iostream>
using namespace std;

class Student
{
    int id;

public:
    void setId(int id)
    {
        this->id = id;
    }

    void showId()
    {
        cout << "Student ID: " <<id << endl;
    }
};

int main()
{
    Student s1;
    s1.setId(101);
    s1.showId(); // Output: Student ID: 101
}

// this keyword is used to access data members of the current object.

// In the example above, the parameter id has the same name as the data member id.To differentiate between them :
// id(without this) refers to the function parameter
// this->id refers to the data member of current object s1
