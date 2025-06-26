//DEque is implemented as dynamic array internally
#include <bits/stdc++.h>
using namespace std;

int main(){
    //create a deque
    deque<int> d = {1,2,3,4,5,6};

    //print elements
    for(int i: d) cout << i << " ";
    cout << endl; //1 2 3 4 5 6 


    //add elements to the front and back
    d.push_front(0);
    d.push_back(7);
    cout<<"After adding elements: ";
    for(int i: d) cout << i << " ";
    cout << endl; //0 1 2 3 4 5 6 7



    //remove elements from the front and back
    d.pop_front();
    d.pop_back();
    cout<<"After removing elements: ";
    for(int i: d) cout << i << " ";
    cout << endl; //1 2 3 4 5 6


    //access an element at given index
    cout<<"Element at idx 3: "<<d[3]<<endl; //Element at idx 3: 4


}