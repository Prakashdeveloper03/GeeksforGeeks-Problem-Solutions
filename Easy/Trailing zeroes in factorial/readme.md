# Trailing zeroes in factorial
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

For an integer `N` find the number of trailing zeroes in `N!`.

__Example 1:__
```
Input:
N = 5
Output:
1
Explanation:
5! = 120 so the number of trailing zero is 1.
```
__Example 2:__
```
Input:
N = 4
Output:
0
Explanation:
4! = 24 so the number of trailing zero is 0.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **trailingZeroes()** which take an integer N as an input parameter and returns the count of trailing zeroes in the N!.

__Expected Time Complexity:__ O(logN)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            ans += (n / 5);
            n = n / 5;
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
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.trailingZeroes(N);
        cout << ans << endl;
    }
    return 0;
}
```