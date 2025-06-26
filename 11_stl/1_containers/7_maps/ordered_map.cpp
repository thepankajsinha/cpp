//Sorted map is implemented as a self-balancing binary search tree (BST), ex- Red-Black Tree.
//Time complexity - O(log n)
//In map, Keys are sorted in increasing order.
#include <bits/stdc++.h>
using namespace std;

void print(map<string, int> studentMarks){
     for(auto i: studentMarks){
        cout << i.first << ": " << i.second << endl;
    }
}
int main(){

    //create a map
    map<string, int> studentMarks;

    //insert key-value pairs
    studentMarks["John"] = 85;
    studentMarks["Jane"] = 92;
    studentMarks["Alice"] = 78;

    //display key-value pairs
    print(studentMarks);
    // Alice: 78
    // Jane: 92
    // John: 85

    //insert key-value pairs
    studentMarks["Bob"] = 95;
    print(studentMarks);
    // Alice: 78
    // Bob: 95
    // Jane: 92
    // John: 85

    //print count of students
    cout<<"Number of students: "<<studentMarks.size()<<endl; // 4

    //find and print Bob's marks
    if(studentMarks.find("Bob")!=studentMarks.end()){
        cout<<"Bob's marks: "<<studentMarks["Bob"]<<endl; // Bob's marks: 95
    }else{
        cout<<"Bob not found"<<endl;
    } 

    //delete key-value pair in map
    studentMarks.erase("Alice");
    print(studentMarks);
    // Bob: 95
    // Jane: 92
    // John: 85 
}