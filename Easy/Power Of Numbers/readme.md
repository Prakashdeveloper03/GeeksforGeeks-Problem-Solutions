# Power of Numbers
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number and its reverse. Find that number raised to the power of its own reverse.

**Note:** As answers can be very large, print the result modulo <b>10<sup>9</sup> + 7</b>.

__Example 1:__
```
Input:
N = 2
Output: 4
Explanation: The reverse of 2 is 2
and after raising power of 2 by 2
we get 4 which gives remainder as
4 by dividing 1000000007.
```
__Example 2:__
```
Input:
N = 12
Output: 864354781
Explanation: The reverse of 12 is 21
and 12 power of 21, when divided by 1000000007
gives remainder as 864354781.
```
__Your Task__

You don't need to read input or print anything. You just need to complete the **function pow()** that takes two parameters `N` and `R` denoting the input number and its reverse and returns **power** of (N to R) % (10<sup>9</sup> + 7).

__Expected Time Complexity:__ O(Log N)

__Expected Auxiliary Space:__ O(Log N)

__Constraints:__
- 1 <= n <= 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long power(int N, int R)
    {
        long long const m = 1000000007;
        if (R == 0)
            return 1;
        long long res = power(N, R / 2);
        res = ((res % m) * (res % m)) % m;
        if (R % 2 == 0)
            return res;
        return (res * (N)) % m;
    }
};

long long rev(long long n)
{
    long long rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, r;
        cin >> n;
        r = rev(n);
        Solution obj;
        cout << obj.power(n, r) << endl;
    }
    return 0;
}
```

