# Return two prime numbers
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an even number N (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only the pair whose minimum value is the smallest among all the minimum values of pairs and print the minimum element first.

__Example 1:__
```
Input: N = 74
Output: 3 71
Explaination: There are several possibilities
like 37 37. But the minimum value of this pair
is 3 which is smallest among all possible
minimum values of all the pairs.
```
__Example 2:__
```
Input: 4
Output: 2 2
Explaination: This is the only possible
prtitioning of 4.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **primeDivision()** which takes N as input parameter and returns the partition satisfying the condition.

__Expected Time Complexity:__ O(N*log(logN))

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 4 <= N <= 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isPrime(int k)
    {
        for (int i = 2; i <= sqrt(k); i++)
        {
            if (k % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> primeDivision(int N)
    {
        vector<int> v;
        for (int i = 2; i <= N; i++)
        {
            if (isPrime(i))
            {
                if (isPrime(N - i))
                {
                    v.push_back(i);
                    v.push_back(N - i);
                    break;
                }
            }
        }
        return v;
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
        vector<int> res = obj.primeDivision(n);
        cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}
```