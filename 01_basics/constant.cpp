#include <bits/stdc++.h>
using namespace std;

int main(){
    //const keyword is used to declare variable as constant
    //we can not change the value of constant

    const bool PI = 3.14;
    // PI = 3.15;
    cout<<PI;

}
// error: assignment of read-only variable 'PI'
// PI = 3.15;