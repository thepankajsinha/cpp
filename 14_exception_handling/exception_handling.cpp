//Exception handling
//try block: This block contains code that might generate an exception.
//throw keyword: When an error occurs, the throw statement is used to signal (throw) an exception.
//catch block: This block handles the exception thrown by the try block.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) { // Throw an exception if denominator is zero
            throw "Division by zero error!";
        }
        result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) { // Catch and handle the exception
        cout << "Error: " << msg << endl;
    }

}

// Enter numerator: 10
// Enter denominator: 0
// Error: Division by zero error!
