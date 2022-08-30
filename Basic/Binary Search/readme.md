# Binary Search
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a sorted array of size `N` and an integer `K`, find the position at which K is present in the array using binary search.

__Example 1:__
```
Input:
N = 5
arr[] = {1 2 3 4 5}
K = 4
Output: 3
Explanation: 4 appears at index 3.
```
__Example 2:__
```
Input:
N = 5
arr[] = {11 22 33 44 55}
K = 445
Output: -1
Explanation: 445 is not present.
```
__Your Task__

You dont need to read input or print anything. Complete the function **binarysearch()** which takes arr[], N and K as input parameters and returns the index of K in the array. If K is not present in the array, return -1.

__Expected Time Complexity:__ O(LogN)

__Expected Auxiliary Space:__ O(LogN)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>
- 1 <= arr[i] <= 10<sup>6</sup>
- 1 <= K <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binarysearch(int arr[], int n, int k)
    {
        int low = 0;
        int high = n - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
                return mid;
            if (k > arr[mid])
                low = mid + 1;
            if (k < arr[mid])
                high = mid - 1;
        }
        return -1;
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
        int arr[100];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        Solution obj;
        cout << obj.binarysearch(arr, n, key) << endl;
    }
    return 0;
}
```