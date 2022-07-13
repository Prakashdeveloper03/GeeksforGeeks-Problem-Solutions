# Next Permutation
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers. If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.

__Example 1:__
```
Input: N = 6
arr = {1, 2, 3, 6, 5, 4}
Output: {1, 2, 4, 3, 5, 6}
Explaination: The next permutation of the
given array is {1, 2, 4, 3, 5, 6}.
```
__Example 2:__
```
Input: N = 3
arr = {3, 2, 1}
Output: {1, 2, 3}
Explaination: As arr[] is the last
permutation. So, the next permutation
is the lowest one.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **nextPermutation()** which takes N and arr[ ] as input parameters and returns a list of numbers containing the next permutation.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10000

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextPermutation(int N, vector<int> arr)
    {
        for (int i = N - 1; i > 0; i--)
        {
            if (arr[i] > arr[i - 1])
            {
                for (int j = N - 1; j >= i; j--)
                {
                    if (arr[i - 1] < arr[j])
                    {
                        swap(arr[i - 1], arr[j]);
                        break;
                    }
                }
                sort(arr.begin() + i, arr.end());
                return arr;
                break;
            }
        }
        sort(arr.begin(), arr.end());
        return arr;
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<int> ans = obj.nextPermutation(n, arr);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
```