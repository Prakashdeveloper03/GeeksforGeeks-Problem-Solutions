# C++ Template
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Template in C++ is a feature. We write code once and use it for any data type including user defined data types.

Given three cases :
- 1st case when two strings are given , print the smallest of the two strings.
- 2nd case when two integers are given, print the smallest of the two integers.
- 3rd case when two char are given , print the smallest of the two characters(lowercase).

Your task is to complete class minElement which would include a private variable say y, a constructor which would set the given value to the private variable. And a method check() which would take one parameter say x and print the min of x and y(private variable) .

First line of each input will contain 1 integer c. Next line will contain two strings if c is equal to 1 or will contain two integers if c is equal to 2 or will contain two char if value of c is equal to 3. We have to print the lowest of the two values given.

__Example 1:__
```
Input:
1
gfg spl
Output:
gfg
```
__Example 2:__
```
Input:
2
5 9
Output:
5
```
### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
template <class T>
class minElement
{
    T a;

public:
    minElement(T n)
    {
        a = n;
    }
    void check(T b)
    {
        if (a < b)
            cout << a << endl;
        else
            cout << b << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            string a, b;
            cin >> a >> b;
            minElement<string> obj1(a);
            obj1.check(b);
        }
        else if (c == 2)
        {
            int a, b;
            cin >> a >> b;
            minElement<int> obj2(a);
            obj2.check(b);
        }
        else
        {
            char a, b;
            cin >> a >> b;
            minElement<char> obj3(a);
            obj3.check(b);
        }
    }
}
```