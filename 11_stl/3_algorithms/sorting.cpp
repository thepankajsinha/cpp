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

    //sort vector in ascending order
    sort(num.begin(), num.end());
    
    // print sorted vector
    print(num);  //1 2 3 5 10 10 20

    //sort vector in descending order
    // use greater as a comparison function to sort in descending order
    // greater<int>() is a function object that returns true if its argument is greater than its argument's complement
    // i.e., greater<int>()(10, 2) returns true, greater<int>()(2, 10) returns false, etc.
    sort(num.begin(), num.end(), greater<int>());
    
    // print sorted vector in descending order
    print(num); //20 10 10 5 3 2 1


     
}