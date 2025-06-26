//vector is implemented as a dynamic array internally
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> num){
    // print elements
    for (int val : num){
        cout << val << " ";
    }
    cout << endl;
}
int main(){

    // create a vector
    vector<int> num;

    // add elements to the vector from back  TC-O(1)
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);

    // display vector
    display(num); // 1 2 3 4 5

    // print size  TC-O(1)
    cout << num.size() << endl; // 5

    // print capacity  TC-O(1)
    cout << num.capacity() << endl; // 8

    // remove element from last  TC-O(1)
    num.pop_back();
    display(num); //1 2 3 4

    //access an element  TC-O(1)
    cout<<"Element at idx 2: "<<num[2]<<endl; // Element at idx 2: 3

    //access front element  TC-O(1)
    cout<<"Front element: "<<num.front()<<endl; //Front element: 1

    //access back element   TC-O(1)
    cout<<"Back element: "<<num.back()<<endl; // Back element: 4





    //delete element at given index  TC-O(n)
    num.erase(num.begin()+1);
    display(num); // 1 3 4

    //insert element at given index  TC-O(n)
    num.insert(num.begin()+1, 2);
    display(num); // 1 2 3 4

    //delete all elements   TC-O(n)
    num.clear();
    display(num); // empty vector
}