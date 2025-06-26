#include <iostream>
using namespace std;

class myClass {
private:
    int value;

public:
    // Constructor
    myClass(int val) {
        value = val;
        cout << "Constructor called" << endl;
    }

    // Copy Constructor
    myClass(const myClass &obj) {
        value = obj.value;
        cout << "Copy constructor called" << endl;
    }

    // Display the value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    myClass obj1(10);  // Normal constructor
    obj1.display();

    myClass obj2(obj1);  // Copy constructor
    obj2.display();
}

// Constructor called
// Value: 10
// Copy constructor called
// Value: 10
