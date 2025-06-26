#include <bits/stdc++.h>
using namespace std;


int main(){
    //create a vector
    vector<int> num = {1, 2, 3, 4, 5};


    // print all elements in forward direction using the iterator
    //here, it is the iterator
    for (auto it = num.begin(); it != num.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;  //1 2 3 4 5


    // print all elements in backward direction using the iterator
    for (auto it = num.rbegin(); it!= num.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;  //5 4 3 2 1

}