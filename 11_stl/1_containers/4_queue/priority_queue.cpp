#include <bits/stdc++.h>
using namespace std;

int main(){

    //priority queue is used to create max heap

    //create a priority queue
    priority_queue<int> pq;

    // insert elements into the priority queue
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(4);
    pq.push(1);

    //it always returns max element 
    cout<<pq.top()<<endl; //5
    pq.pop();
    cout<<pq.top()<<endl; //4


    //create reverse priority queue
    priority_queue<int, vector<int>, greater<int>> rpq;

    // insert elements into the reverse priority queue
    rpq.push(5);
    rpq.push(3);
    rpq.push(2);
    rpq.push(4);
    rpq.push(1);

    //it always returns min element 
    cout<<rpq.top()<<endl; //1
    rpq.pop();
    cout<<rpq.top()<<endl; //2
}