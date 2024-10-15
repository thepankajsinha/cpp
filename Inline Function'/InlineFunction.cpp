//An inline function is a function for which the compiler attempts to expand the function’s code in place where it is called, rather than using the typical function call mechanism (which involves overhead for function call, parameter passing, etc.).

//Working of inline function:
//The square() function is declared inline. Instead of making a function call, the compiler replaces the function call square(num) with its code num * num directly at the call site.

//When to Use Inline Functions:
//Inline functions are beneficial for small, frequently used functions.


#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    
    // Calling the inline function
    cout<<"Square of "<<num<<" is: "<<square(num)<<endl;

}
//Square of 5 is: 25
