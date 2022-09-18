# Learn to Comment
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Comments are very useful in any language to tell a user what is the task of any function or operation. The comments are neglected by the compiler, so whatever you write in the comments won't have any effect on the working of a code. In C/C++, comments can be written as mentioned below:
```
/*This is a comment*/
//This is also a comment
```
__Example:__
```
Input:
a = 5
b = 6
c = 15
Output:
5
15
Explanation:
Value of b is not printed.
```
__Your Task__

Your task is to complete a function that print a, b and c. Comment the code that outputs b, so only a and c gets printed.

__Constraints:__
- 1 <= a <= 10<sup>6</sup>
- 1 <= b <= 10<sup>6</sup>
- 1 <= c <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

void comment(int a, int b, int c)
{
    cout << a << endl;
    // cout<<b<<endl;
    cout << c << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        comment(a, b, c);
    }
    return 0;
}
```