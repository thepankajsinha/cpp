#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;


    if (number > 0) {
        cout << "The number is positive." << endl;
    } 
    else if (number < 0) {
        cout << "The number is negative." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }
}

// Enter a number: 1
// The number is positive.
