#include <bits/stdc++.h>
using namespace std;

int main(){

    //create a stack
    stack<int> myStack;

    //push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    //display the top element
    cout<<"Top element: "<<myStack.top()<<endl; //3

    //pop an element from the stack
    myStack.pop();

    //display the top element after popping
    cout<<"Top element after popping: "<<myStack.top()<<endl; //2

    //print size of stack
    cout<<"Size of stack: "<<myStack.size()<<endl; //2


}