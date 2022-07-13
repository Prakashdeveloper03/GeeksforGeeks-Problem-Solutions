# Merge Sort
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr[]`, its starting position l and its ending position r. Sort the array using merge sort algorithm.

__Example 1:__
```
Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9
```
__Example 2:__
```
Input:
N = 10
arr[] = {10 9 8 7 6 5 4 3 2 1}
Output:
1 2 3 4 5 6 7 8 9 10
```
__Your Task__

You don't need to take the input or print anything. Your task is to complete the function **merge()** which takes arr[], l, m, r as its input parameters and modifies arr[] in-place such that it is sorted from position l to position r, and function **mergeSort()** which uses merge() to sort the array in ascending order using merge sort algorithm.

__Expected Time Complexity:__ O(nlogn)

__Expected Auxiliary Space:__ O(n)

__Constraints:__
- 1 ≤ n ≤ 10<sup>5</sup>
- 1 ≤ arr[i] ≤ 10<sup>3</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int input[], int start, int mid, int end)
    {
        int i = start;
        int j = mid + 1;
        int k = start;
        int arr[end + 1];

        while (i <= mid && j <= end)
        {
            if (input[i] > input[j])
            {
                arr[k] = input[j++];
            }
            else
            {
                arr[k] = input[i++];
            }
            k++;
        }

        if (j > end)
        {
            while (i <= mid)
            {
                arr[k++] = input[i++];
            }
        }
        else
        {
            while (j <= end)
            {
                arr[k++] = input[j++];
            }
        }

        for (int m = start; m <= end; m++)
        {
            input[m] = arr[m];
        }
    }

    void mergeSort(int input[], int i, int j)
    {
        if (i < j)
        {
            int mid = (i + j) / 2;
            mergeSort(input, i, mid);
            mergeSort(input, mid + 1, j);
            merge(input, i, mid, j);
        }
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
        int arr[n + 1];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        obj.mergeSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
```