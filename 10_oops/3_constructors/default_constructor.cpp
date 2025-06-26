#include <iostream>
using namespace std;

class MyClass {
public:
    int x;

    // Default constructor
    MyClass() {
        x = 100;   // Initialize x with 100
    }
};

int main() {
    MyClass obj;   // obj object is created
    cout<<obj.x;  // Output: 100
}
