#include<iostream>
using namespace std;

int main() {
    bool a = true, b = false;
    
    cout << (a && b) << endl;  // && Returns true if both statements are true
    cout << (a || b) << endl;  // || Returns true if one of the statements is true
    cout << (!a) << endl;      // ! Reverse the result, returns false if the result is true
}

// 0
// 1
// 0
