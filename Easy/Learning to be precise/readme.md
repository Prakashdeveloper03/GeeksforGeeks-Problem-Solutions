# Learning to be precise
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we'll learn how to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.

**Note:** You may use setprecision and fixed.

__Example:__
```
Input:
a = 5.43
b = 2.653
Output:
2.04674 2.047
Explanation:
Value of a/b is printed with and
without decimal precision.
```
__Constraints:__
- 1 <= a, b,<= 100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

void precise(float a, float b)
{
    float r = a / b;
    cout << r;
    cout << " " << setprecision(3) << fixed << r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b;
        cin >> a >> b;
        precise(a, b);
    }
    return 0;
}
```