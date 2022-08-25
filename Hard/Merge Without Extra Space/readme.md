# Merge Without Extra Space
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two sorted arrays `arr1[]` of size `N` and `arr2[]` of size `M`. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

__Example 1:__
```
Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
Explanation: Since you can't use any
extra space, modify the given arrays
to form
arr1[] = {0, 1, 2, 3}
arr2[] = {5, 6, 7, 8, 9}
```
__Example 2:__
```
Input:
N = 2, M = 3
arr1[] = {10, 12}
arr2[] = {5, 18, 20}
Output: 5 10 12 18 20
Explanation: Since you can't use any
extra space, modify the given arrays
to form
arr1[] = {5, 10}
arr2[] = {12, 18, 20}
```
__Your Task__

You don't need to read input or print anything. Complete the function **merge()** which takes the two arrays arr1[], arr2[] and their sizes n and m, as input parameters. The function does not return anything. Use the given arrays to sort and merge arr1[] and arr2[] in-place.
Note: The generated output will print all the elements of arr1[] followed by all the elements of arr2[].

__Expected Time Complexity:__ O((n+m)*log(n+m))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N, M <= 5 * 10<sup>4</sup>
- 0 <= arr1<sub>i</sub>, arr2<sub>i</sub> <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        int i = n - 1, j = 0;
        while (i >= 0 && j < m && arr1[i] > arr2[j])
        {
            swap(arr1[i--], arr2[j++]);
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution obj;
        obj.merge(arr1, arr2, n, m);
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }

        for (int i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
```