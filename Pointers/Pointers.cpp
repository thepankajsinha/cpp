// Pointers are variables that store the memory addresses of other variables.

#include <iostream>
using namespace std;

int main(){
    //create variable a 
    int a = 10;


    //print address of a
    cout<<&a<<endl; //0x61ff0c


    //pointer declaration and initialization
    int* ptr = &a;
    cout<<ptr<<endl;  //0x61ff08


    //update variable using pointer
    *ptr = 15;
    cout<<a;
    //15

}