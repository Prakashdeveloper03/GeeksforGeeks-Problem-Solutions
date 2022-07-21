# Kth Smallest Factor
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two positive integers N and K. You have to find the Kth smallest factor of N. A factor of N is a positive integer which divides N. Output the Kth smallest factor of N if it exists otherwise print -1.

__Example 1:__
```
Input : N = 4 , K = 2
Output: 2
Explanation:
All factors of 4 are 1,2 and 4. Out of
these 2 is the 2nd smallest.
```
__Example 2:__
```
Input : N = 4 , K = 3
Output: 4
Explanation:
All factors of 4 are 1,2 and 4. Out of
these 4 is the 3rd smallest.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **kThSmallestFactor()** which takes 2 Integers N and K as input and returns the answer.

__Expected Time Complexity:__ O(sqrt(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>6</sup>
- 1 <= K <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kThSmallestFactor(int N, int K)
    {
        set<int> s;
        for (int i = 1; i <= sqrt(N); i++)
        {
            if (N % i == 0)
            {
                s.insert(i);
                s.insert(N / i);
            }
        }
        if (s.size() < K)
        {
            return -1;
        }
        int count = 0, ans;
        for (auto it : s)
        {
            if (count != K)
            {
                count++;
                ans = it;
            }
            else
            {
                break;
            }
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
        int N, K;

        cin >> N >> K;

        Solution ob;
        cout << ob.kThSmallestFactor(N, K) << endl;
    }
    return 0;
}
```