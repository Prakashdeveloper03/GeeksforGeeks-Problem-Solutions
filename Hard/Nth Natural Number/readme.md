# Nth Natural Number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a positive integer N. You have to find <b>N<sup>th</sup></b> natural number after removing all the numbers containing digit `9`.

__Example 1:__
```
Input:
N = 8
Output:
8
Explanation:
After removing natural numbers which contains
digit 9, first 8 numbers are 1,2,3,4,5,6,7,8
and 8th number is 8.
```
__Example 2:__
```
Input:
N = 9
Output:
10
Explanation:
After removing natural numbers which contains
digit 9, first 9 numbers are 1,2,3,4,5,6,7,8,10
and 9th number is 10.
```
__Your Task__

You don't need to read input or print anything. Complete the function **findNth()** which accepts an integer N as input parameter and return the Nth number after removing all the numbers containing digit 9.

__Expected Time Complexity:__ O(logN)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>12</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findNth(long long N)
    {
        long long ans = 0, x = 1;
        while (N)
        {
            ans += N % 9 * x;
            N /= 9;
            x *= 10;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
    return 0;
}
```