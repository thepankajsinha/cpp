#include <bits/stdc++.h>
using namespace std;

int main(){
    //create a pair
    pair<int, string> p = {10, "Hello"};

    //access elements of pair
    cout << p.first <<endl; //10
    cout << p.second << endl; //Hello

    //pair of pairs
    pair<pair<int, string>, pair<int, string>> pp = {{1, "a"}, {2, "b"}};

    //access elements of pair of pairs
    cout << pp.first.first << endl; //1
    cout << pp.first.second << endl; //a
    cout << pp.second.first << endl; //2
    cout << pp.second.second << endl; //b
}