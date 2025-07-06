#include <iostream>
using namespace std;

void modify(int x)
{
    x = x + 10;
    cout << "Inside modify() x = " << x << endl;
}

int main()
{
    int a = 5;
    modify(a);
    cout << "In main() a = " << a << endl;
    return 0;
}


// Output:// Inside modify() x = 15
// In main() a = 5

// In Call by Value, a copy of the actual variable is passed to the function.Changes made inside the function do not affect the original variable.