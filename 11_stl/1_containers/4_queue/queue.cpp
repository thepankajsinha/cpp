#include <bits/stdc++.h>
using namespace std;

int main(){

    //create a queue
    queue<int> myQueue;

    // push elements into the queue from back
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // print the front element
    cout<<"Front element: "<<myQueue.front()<<endl; //Front element: 1

    // print the back element
    cout<<"Back element: "<<myQueue.back()<<endl; //Back element: 3

    // print the size of the queue
    cout<<"Size of the queue: "<<myQueue.size()<<endl; //Size of the queue: 3

    // pop the front element
    myQueue.pop();

    // print the front element after popping
    cout<<"Front element: "<<myQueue.front()<<endl; //Front element: 2

}