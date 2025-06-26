// unordered_map is implemented as a hash table.
// Time complexity - O(1)
// In unsorted map, Keys are sorted randomly.
#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<string, int> studentMarks)
{
    for (auto i : studentMarks)
    {
        cout << i.first << ": " << i.second << endl;
    }
}
int main()
{

    // create a unordered_map
    unordered_map<string, int> studentMarks;

    // insert key-value pairs
    studentMarks["John"] = 85;
    studentMarks["Jane"] = 92;
    studentMarks["Alice"] = 78;

    // display key-value pairs
    print(studentMarks);
    // Alice: 78
    // Jane: 92
    // John: 85

    // find a value by key
    cout << "Marks of John: " << studentMarks["John"] << endl; // Marks of John: 85

    // delete a key-value pair
    studentMarks.erase("Alice");
    print(studentMarks);
    // Jane: 92
    // ohn: 85

    return 0;
}