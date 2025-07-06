#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor with one argument (square case)
    Rectangle(int side) {
        length = side;
        width = side;
        cout << "Square constructor called" << endl;
    }

    // Parameterized constructor with two arguments
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called" << endl;
    }

    // Method to display the area of the rectangle
    void displayArea() {
        cout<<"Area: "<<length*width<<endl;
    }
};

int main() {
    Rectangle rect1;          // Calls default constructor
    rect1.displayArea();
    // Default constructor called
    // Area: 0

    Rectangle rect2(5);       // Calls constructor for square
    rect2.displayArea();
    // Square constructor called
    // Area: 25

    Rectangle rect3(4, 6);    // Calls parameterized constructor with two arguments
    rect3.displayArea();
    // Parameterized constructor called
    // Area: 24

}


// ✅ What is Constructor Overloading ?
// Constructor Overloading means having multiple constructors in the same class with different parameters(number or types).It allows you to create objects in different ways.