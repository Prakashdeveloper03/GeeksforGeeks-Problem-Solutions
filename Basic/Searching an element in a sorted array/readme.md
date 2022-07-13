# Searching an element in a sorted array
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr[]` sorted in ascending order of size `N` and an integer `K`. Check if `K` is present in the array or not.

__Example 1:__
```
Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
Exlpanation: Since, 6 is present in
the array at index 4 (0-based indexing),
output is 1.
```
__Example 2:__
```
Input:
N = 5, K = 2
arr[] = {1,3,4,5,6}
Output: -1
Exlpanation: Since, 2 is not present
in the array, output is -1.
```
__Your Task__

You don't need to read input or print anything. Complete the function **searchInSorted()** which takes the sorted array arr[], its size N and the element K as input parameters and returns 1 if K is present in the array, else it returns -1.

__Expected Time Complexity:__ O(log n)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>6</sup>
- 1 <= K <= 10<sup>6</sup>
- 1 <= arr[i] <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInSorted(int arr[], int n, int k)
    {
        int low = 0;
        int high = n - 1;
        int mid = 0;

        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] < k)
                low = mid + 1;
            else if (arr[mid] > k)
                high = mid - 1;
            else
                return 1;
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        Solution obj;
        cout << obj.searchInSorted(arr, n, key) << endl;
    }
    return 0;
}
```

