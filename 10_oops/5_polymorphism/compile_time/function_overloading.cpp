//1.Function overloading allows multiple functions with the same name but different parameter lists (different types, number of parameters, or both). 

//2.This enables a single function name to perform different tasks based on the provided arguments.

//3.The compiler differentiates these functions by their number of parameters and/or types of parameters.

#include <iostream>
using namespace std;

class Example {
public:
    // Function to add two integers
    void add(int a, int b) {
        cout<<(a + b)<<endl;
    }

    // Overloaded function to add three integers
    void add(int a, int b, int c) {
        cout<<(a + b + c);
    }
};

int main() {
    Example ex;
    ex.add(10,5); //15
    ex.add(10,5,5); //20
}

