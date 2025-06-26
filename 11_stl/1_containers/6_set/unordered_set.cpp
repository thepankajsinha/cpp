//unordered_set is implemented using a hash table
//Stored element in random order
//Time complexity - O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){
    //create a unordered_set
    unordered_set<int> mySet;
    
    //insert elements into the unordered_set
    mySet.insert(1);
    mySet.insert(3);
    mySet.insert(5);

    //print all elements
    for(int i: mySet) cout << i << " ";
    cout << endl; //1 3 5
    
    //find an element
    auto it = mySet.find(3);
    if(it!=mySet.end()) cout << "Element found: " << *it << endl; //Element found: 3

    //remove an element
    mySet.erase(3);
    for(int i: mySet) cout << i << " ";
    cout << endl; //1 5

    //check if an element exists
    if(mySet.find(3)==mySet.end()) cout << "Element not found" << endl; //Element not found

}