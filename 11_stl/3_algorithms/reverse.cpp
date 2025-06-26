#include <bits/stdc++.h>
using namespace std;

void print(vector<int>num){
    for(int val : num) {
        cout << val << " ";
    }
    cout << endl;
}
int main() {

    // create a vector
    vector<int> num = {2,5,10,1,3,10,20};

    //reverse the vector
    reverse(num.begin(), num.end());

    // print reversed vector
    print(num);  //20 10 3 1 10 5 2

    
}