# Sum of all sub-sequences of a number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number as integer s, find the sum of all the elements present in all possible subsequences of s.

__Example 1:__
```
Input:  S = "123"
Output: 24
Explanation: {1}, {2}, {3}, {1, 2}, {2, 3}
{1, 3}, {1, 2, 3} are all possible sub-
sequences
```
__Example 2:__
```
Input:  S = "5"
Output: 5
Explanation: {5} is the only possible
sub sequence
```
__Your Task__

Your task is to complete the function **subsequnceSum()** which takes a single string as inputs and returns the sum. You need not take any input or print anything.

__Expected Time Complexity:__ O(|s|)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= |S| <= 20

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subsequenceSum(string s)
    {
        int sum = 0, n = s.size();
        for (int i = 0; i < n; i++)
            sum += s[i] - '0';
        return sum * (1 << n - 1);
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
        cout << obj.subsequenceSum(s) << endl;
    }
    return 0;
}
```