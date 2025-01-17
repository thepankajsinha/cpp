#include <bits/stdc++.h>
using namespace std;

int main(){
    //Concatenation
    string s1 = "Hello ";
    string s2 = "World";
    cout<<s1+s2<<endl;
    //Hello World


    //string length
    string s3 = "Hello World";
    cout<<s3.length()<<endl;
    //11


    //Access Strings
    cout<<s3[0]<<endl;
    //H


    //add character to string
    s3.push_back('A');
    cout<<s3<<endl;
    //Hello WorldA


    //remove a character from string
    s3.pop_back();
    cout<<s3<<endl;
    //Hello World


    //use substr function- substr(start index, string length)
    cout<<s3.substr(0,5)<<endl;
    //Hello


    //convert integer to string
    int a = 10;
    int b = 50;
    cout<<a+b<<endl; //60
    cout<<to_string(a) + to_string(b)<<endl; //1050


    //convert string to integer
    string c = "100";
    cout<<stoi(c) + 50<<endl;
    //150


    //sort the string
    //It sort the string according to ASCII value order
    sort(s3.begin(), s3.end());
    cout<<s3<<endl;
    // HWdellloor


    //reverse an string
    reverse(s3.begin(), s3.end());
    cout<<s3<<endl;
    //roollledWH

   
}

