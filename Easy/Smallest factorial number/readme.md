# Smallest factorial number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number `n`. The task is to find the smallest number whose factorial contains at least **n trailing zeroes**.

__Example 1:__
```
Input:
n = 1
Output: 5
Explanation : 5! = 120 which has at
least 1 trailing 0.
```
__Example 2:__
```
Input:
n = 6
Output: 25
Explanation : 25! has at least
6 trailing 0.
```
__Your Task__

Complete the function **findNum()** which takes an integer N as input parameters, and returns the answer.

__Expected Time Complexity:__ O(log<sub>2</sub> N * log<sub>5</sub> N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= n <= 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int mid, int n)
    {
        int counter = 0, x = mid;
        while (x)
        {
            x /= 5;
            counter += x;
        }
        return (counter >= n);
    }

    int findNum(int n)
    {
        int low = 1, high = 1e9, mid, ans;
        while (high >= low)
        {
            mid = low + (high - low) / 2;
            if (check(mid, n))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
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
        int n;
        cin >> n;
        Solution obj;
        cout << obj.findNum(n) << endl;
    }
    return 0;
}
```

