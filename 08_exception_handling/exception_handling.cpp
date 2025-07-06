#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1 = 10, num2 = 0;
    int result;

    try {
        if (num2 == 0) { // Throw an exception if denominator is zero
            throw "Division by zero error!";
        }
        result = num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) { // Catch and handle the exception
        cout << "Error: " << msg << endl;
    }

}
// Output: Error: Division by zero error!




// Exception handling-It is a mechanism to handle runtime errors

// try block: This block contains code that might generate an exception.
// throw keyword: When an error occurs, the throw statement is used to throw an exception.
// catch block: This block handles the exception thrown by the try block.