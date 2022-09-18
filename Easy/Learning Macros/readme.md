# Learning Macros
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Macro is one of the most important part of CPP preprocessors. It allows us to define variables and functions and it basically works by substituting the value or function during the preprocessing stage of code conversion(High level to Low level). So, let's dive into preprocessors!

You are given two inputs: a(integer), and b(integer). You need to print a * b .

**Input Format:**

First line of input conatins number of testcases T. For each testcase, there will be one line of input containing `a` and `b`.

**Output Format:**

For each testcase, print `a * b`.

__Example 1:__
```
Input:
2
5 6
7 11

Output:
30
77
```

__Constraints:__
- 1 <= T <= 10
- 1 <= a,b <= 100

### Solution
```cpp
#include <bits/stdc++.h>
#define MULTI(a, b) (a * b)
using namespace std;

void macros(int a, int b)
{
    cout << MULTI(a, b);
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        macros(a, b);
    }
    return 0;
}
```