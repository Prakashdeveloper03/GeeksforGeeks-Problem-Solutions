# Run Length Encoding
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a string, Your task is to  complete the function encode that returns the **run length encoded** string for the given string.

**eg:** if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.

__Example 1:__
```
Input:
str = aaaabbbccc
Output: a4b3c3
Explanation: a repeated 4 times
consecutively b 3 times, c also 3
times.
```
__Example 2:__
```
Input:
str = abbbcdddd
Output: a1b3c1d4
```
__Your Task__

Complete the function **encode()** which takes a character array as a input parameter and returns the encoded string.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= length of str <= 100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
string encode(string src);
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        cout << encode(str) << endl;
    }
    return 0;
}

string encode(string src)
{
    int count = 1;
    string res = "";
    res += src[0];
    for (int i = 1; i < src.length(); i++)
    {
        if (src[i] == src[i - 1])
        {
            count++;
        }
        else
        {
            res += to_string(count);
            res += src[i];
            count = 1;
        }
    }
    res += to_string(count);
    return res;
}
```