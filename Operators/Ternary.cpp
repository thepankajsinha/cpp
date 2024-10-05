#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;  //This is a shorthand for an if-else condition.
    
    cout << "Maximum: " << max << endl;
}

//Maximum: 20