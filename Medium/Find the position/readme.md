# Find the position
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Consider a series of numbers composed of only digits 4 and 7. First few numbers in the series are 4, 7, 44, 47, 74, 77, 444, .. etc. Given a string N constructed by 4, 7 digit only, find position of this number in this series.

__Example 1:__
```
Input: N = "7"
Output: 2
Explanation: In the series 4 , 7 , 44 , 47...
7 is at second position.
```
__Example 2:__
```
Input: N = "444"
Output: 7
Explanation: In the series 4 , 7 , 44 ,
47 , 74 , 77 , 444 , 447... 444 is at 7th
position
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **findpos()** which accepts a string N as input parameter and returns the position of that string in the given series.

__Expected Time Complexity:__ O(Length of given string)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= Length of String < 50

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unsigned long long int findpos(string n)
    {
        unsigned long long int sum = 0, p = 1;
        for (int i = n.size() - 1; i >= 0; i--)
        {
            if (n[i] == '7')
                sum += p;
            p = p * 2;
        }
        return sum + pow(2, n.size()) - 1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.findpos(s) << endl;
    }
    return 0;
}
```

