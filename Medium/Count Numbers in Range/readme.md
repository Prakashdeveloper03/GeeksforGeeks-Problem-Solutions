# Count Numbers in Range
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two positive integers `L` and `R`, return count of numbers having exactly 3 divisors from L to R inclusive.

__Example 1:__
```
Input:
L = 1, R = 10
Output:
2
Explanation:
4 and 9 are two numbers between 1 and 10
and have exactly 3 divisors.
```
__Example 2:__
```
Input:
L = 2, R = 5
Output:
1
Explanation:
4 is the only number between 2 and 5
and have exactly 3 divisors.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **count3DivNums()** which takes 2 Integers L, and R as input and returns the count of numbers between L and R having exacly 3 divisors.

__Expected Time Complexity:__ O(sqrt(R) * log(R))

__Expected Auxiliary Space:__  O(sqrt(R))

__Constraints:__
- 1 <= L <= R <= 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int prime(int num)
    {
        int i, limit;
        limit = sqrt(num);
        if (num == 1)
            return 0;
        if (num == 2)
            return 1;
        for (i = 2; i <= limit; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        if (i > limit)
        {
            return 1;
        }
    }

    int count3DivNums(long long L, long long R)
    {
        int res = 0;
        for (int i = 1; i * i <= R; i++)
        {
            int a = i * i;
            if (prime(i) && (L <= a && a <= R))
            {
                res++;
            }
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.count3DivNums(L, R) << endl;
    }
    return 0;
}
```