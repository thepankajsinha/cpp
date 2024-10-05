#include<iostream>
using namespace std;

int main() {
    int a = 5, b = 3; // In binary: a = 101, b = 011
    
    cout << (a & b) << endl;  // Bitwise AND -> 001 = 1
    cout << (a | b) << endl;  // Bitwise OR  -> 111 = 7
    cout << (a ^ b) << endl;  // Bitwise XOR -> 110 = 6
    cout << (~a) << endl;     // Bitwise NOT -> -6
    cout << (a << 1) << endl; // Left shift -> 1010 = 10
    cout << (a >> 1) << endl; // Right shift -> 10 = 2
}

// 1
// 7
// 6
// -6
// 10
// 2
