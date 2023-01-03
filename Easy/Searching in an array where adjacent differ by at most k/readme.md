# Searching in an array where adjacent differ by at most k
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

A step array is an array of integer where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple elements exist, return the first occurrence of the key.

__Example 1:__
```
Input : arr[ ] = {4, 5, 6, 7, 6}, K = 1
        and X = 6
Output : 2
Explanation:
In an array arr 6 is present at index 2.
So, return 2.
```
__Example 2:__
```
Input : arr[ ] = {20 40 50}, K = 20
        and X = 70
Output :  -1
```
__Your Task__

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function **search()** that takes an array (arr), sizeOfArray (n), an integer value `X`, another integer value `K`, and return an integer displaying the index of the element X in the array arr. If the element is not present in the array return `-1`. The driver code takes care of the printing.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>
- 1 ≤ K ≤ 10<sup>2</sup>
- 1 ≤ arr[i], X ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x, int k);
int main()
{
    int t, n, k, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> x;
        cout << search(arr, n, x, k) << endl;
    }
    return 0;
}

int search(int arr[], int n, int x, int k)
{
    int i = 0;
    while (i < n)
    {
        if (x == arr[i])
            return i;
        int jump = abs(x - arr[i]);
        jump = jump / k;
        i = jump == 0 ? i + 1 : i + jump;
    }
    return -1;
}
```