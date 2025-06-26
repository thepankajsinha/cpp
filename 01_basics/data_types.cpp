#include <bits/stdc++.h>
using namespace std;

int main(){
    //It stores string values 
    string name = "Rohan"; 

    // It stores integers and takes 4 bytes
    int marks = 87;        

    // It stores decimal values & takes 4 bytes
    //Sufficient for storing 6-7 decimal digits 
    float CGPA = 8.99; 

    // It stores decimal values & takes 8 bytes
    //Sufficient for storing 15 decimal digits
    double percentage = 89.87; 

    //It stores character and takes 1 byte
    char grade = 'A';

    //Stores true or false values and takes 1 byte
    bool isPass = true;


    cout<<name<<" "<<marks<<" "<<CGPA<<" "<<percentage<<" "<<grade<<" "<<isPass;  
}

//Rohan 87 8.99 89.87 A 1