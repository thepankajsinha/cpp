//List is implemented as a doubly linked list internally

#include <bits/stdc++.h>
using namespace std;

// Function to print a list 
void print(list<int> li){
    for (auto it = li.begin(); it != li.end(); it++) cout << *it << " ";
    cout << endl;
}

int main(){
    // Create a list
    list<int> li;

    // Add elements to the list  TC-O(1)
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);


    // Display the list  TC-O(n)
    print(li); //1 2 3 4 


    // Remove the last element  TC-O(1)
    li.pop_back();
    print(li); //1 2 3


    // Add an element at the beginning  TC-O(1)
    li.push_front(10);
    print(li); //10 1 2 3


    // Remove the first element  TC-O(1)
    li.pop_front();
    print(li);  //1 2 3 


    // Remove all elements from the list  
    li.clear();

}