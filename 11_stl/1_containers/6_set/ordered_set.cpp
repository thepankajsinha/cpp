//set is typically implemented as a self-balancing binary search tree (BST), usually a Red-Black Tree.
//Stored element in sorted order
//Time complexity - O(log n)
#include <bits/stdc++.h>
using namespace std;

int main(){
    //create a set
    set<int> mySet;

    // insert elements into the set
    mySet.insert(1);
    mySet.insert(3);
    mySet.insert(2);

    // print all elements
    for(auto val : mySet){ {
        cout << val << " ";
    }
    cout << endl; //1 2 3

    // remove an element
    mySet.erase(2);

    // print all elements after removal
    for(auto val : mySet){ {
        cout << val << " ";
    }
    cout << endl; //1 3

    // find an element
    if(mySet.find(2) != mySet.end()) cout << "Element found" << endl;
    else cout << "Element not found" << endl;
    //Element not found

    // check if set is empty
    if(mySet.empty())cout << "Set is empty" << endl;
    else cout << "Set is not empty" << endl;
    //Set is not empty
}
}
}