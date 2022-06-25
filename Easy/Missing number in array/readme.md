# Missing number in array
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of size `N - 1` such that it only contains distinct integers in the range of `1` to `N`. Find the missing element.

__Example 1:__
```
Input:
N = 5
A[] = {1,2,3,5}
Output: 4
```
__Example 2:__
```
Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
```
__Your Task__

You don't need to read input or print anything. Complete the function **MissingNumber()** that takes array and N as input  parameters and returns the value of the missing number.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>6</sup>
- 1 ≤ A[i] ≤ 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MissingNumber(int array[], int n)
    {
        int total = (n * (n + 1)) / 2;
        for (int i = 0; i < n - 1; i++)
        {
            total -= array[i];
        }
        return total;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int arr[n - 1];
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.MissingNumber(arr, n) << endl;
    }
    return 0;
}
```

