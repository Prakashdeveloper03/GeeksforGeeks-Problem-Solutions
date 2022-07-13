# Perfect Numbers
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number `N`, check if a number is perfect or not. A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number.

__Example 1:__
```
Input:
N = 6
Output:
1
Explanation:
Factors of 6 are 1, 2, 3 and 6.
Excluding 6 their sum is 6 which
is equal to N itself. So, it's a
Perfect Number.
```
__Example 2:__
```
Input:
N = 10
Output:
0
Explanation:
Factors of 10 are 1, 2, 5 and 10.
Excluding 10 their sum is 8 which
is not equal to N itself. So, it's
not a Perfect Number.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **isPerfectNumber()** which takes an Integer N as input and returns 1 if N is a Perfect number else returns 0.

__Expected Time Complexity:__ O(sqrt(N))

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
    int isPerfectNumber(long long N)
    {
        int sum = 1;
        if (N == 1)
            return 0;
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
            {
                sum += i;
                sum += N / i;
            }
        }
        if (sum == N)
            return 1;
        return 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.isPerfectNumber(n) << endl;
    }
    return 0;
}
```