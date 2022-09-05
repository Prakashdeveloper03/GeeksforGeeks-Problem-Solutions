# C++ Friend function
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Ankush challenges Ankit to complete his code which implements the functionality of checking if the first and last name of a student is an anagram of each other or not.

An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other. Invest your time to study the locked code and complete it accordingly.

**Input:**

The first line contains the number of test cases, each test case consists of one line input containing 2 space separated strings representing the first and last name of the student.

**Output:**

For each test case T, the output should consist of a single line - ANAGRAM or NOT ANAGRAM depending upon if the 2 given strings are anagram of each other or not.

__Example:__
```
Input:
2
rahul garg
ankit kitan

Output:
NOT ANAGRAM
ANAGRAM
```

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string first_name, last_name;

public:
    void set_name(string f, string l)
    {
        first_name = f;
        last_name = l;
    }
    friend void check_name(student k);
};

void check_name(student k)
{
    string f, l;
    f = k.first_name;
    l = k.last_name;

    sort(f.begin(), f.end());
    sort(l.begin(), l.end());

    if (f == l)
    {
        cout << "ANAGRAM" << endl;
    }

    else
    {
        cout << "NOT ANAGRAM" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string f, l;
        cin >> f >> l;
        student s;
        s.set_name(f, l);
        check_name(s);
    }
    return 0;
}
```