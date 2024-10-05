#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 10) {
        cout << "The number is greater than 10." << endl;
    } 
    else {
        cout << "The number is 10 or less." << endl;
    }
}
// Enter a number: 15
// The number is greater than 10.
