#include <bits/stdc++.h>
using namespace std;


int main() {

   //create vector
   vector<int> vec = {1, 3, 5, 7, 9};
   
   //search an element using binary search
   int target = 5;
   cout<<binary_search(vec.begin(), vec.end(), target); //1


    int target = 10;
    cout<<binary_search(vec.begin(), vec.end(), target);//0

}