# The New Line
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Before implementing any algorithm, we should be thorough with taking inputs. Here, we will learn how to read inputs.
You are given two inputs: a(integer), and b(string). You need to take the input and print a and b separated by a space.

__Example 1:__
```
Input:
a = 5
b = Hello
Output:
5 Hello
```
__Example 2:__
```
Input:
a = 7
b = Geeks
Output:
7 Geeks
```

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

void inputData()
{
    int a;
    string b;
    cin >> a >> b;
    cout << a << " " << b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inputData();
    }
    return 0;
}
```