# Find Missing And Repeating
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an unsorted array `arr` of size `N` of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

__Example 1:__
```
Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and
smallest positive missing number is 1.
```
__Example 2:__
```
Input:
N = 3
Arr[] = {1, 3, 3}
Output: 3 2
Explanation: Repeating number is 3 and
smallest positive missing number is 2.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **findTwoElement()** which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer ( The first index contains B and second index contains A.)

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>6</sup>
- 1 ≤ arr[i] ≤ N

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        int *res = new int(2);
        for (int i = 0; i < n; i++)
        {
            if (arr[abs(arr[i]) - 1] < 0)
                res[0] = abs(arr[i]);
            else
                arr[abs(arr[i]) - 1] *= -1;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                res[1] = i + 1;
                break;
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
```