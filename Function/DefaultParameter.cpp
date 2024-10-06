#include <iostream>
using namespace std;


int sum(int a, int b=10){ 
    return a + b;   
}

int main(){
    // If we call the function without second argument, then it uses the default value of second parameter
    cout<<sum(10); //20
    cout<<sum(10,5); //15
}

//here b is an optional parameter