#include <bits/stdc++.h>
using namespace std;


int main() {

   int a = 10, b =20;
   
   //find minimum number
   int min_num = min(a, b);
   cout << min_num << endl; //10
   
   //find maximum number
   int max_num = max(a, b);
   cout << max_num << endl; //20


   //create vector
   vector<int> vec = {1, 3, 5, 7, 9};
   
   //find minimum element in vector
   cout<< *(min_element(vec.begin(), vec.end())); //1
   cout<<endl;

   
   //find maximum element in vector
   cout<< *(max_element(vec.begin(), vec.end())); //9

}