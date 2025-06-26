#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    int area() {
        return length * width;
    }

};

int main() {
    // Create objects using parameterized constructor
    Rectangle rect1(10, 5);
    cout<<rect1.area();  //50

}
