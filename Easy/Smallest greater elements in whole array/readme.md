# Smallest greater elements in whole array
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `A` of `N` length. We need to calculate the next smallest greater element for each element in a given array. If the next greater element is not available in a given array then we need to fill **-10000000** at that index place.

__Example 1:__
```
Input : arr[] = {13, 6, 7, 12}
Output : _ 7 12 13
Explanation:
Here, at index 0, 13 is the greatest value
in given array and no other array element
is greater from 13. So at index 0 we fill
'-10000000'.
```
__Example 2:__
```
Input : arr[] = {6, 3, 9, 8, 10, 2, 1, 15, 7}
Output :  7 6 10 9 15 3 2 _ 8
Explanation: Here, at index 7, 15 is the greatest
value in given array and no other array element is
greater from 15. So at index 7 we fill '-10000000'.
```
__Your Task__

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function **greaterElement()** that takes an array (arr), sizeOfArray (n), and return an array that displays the next greater element to element at that index. The driver code takes care of the printing.

__Expected Time Complexity:__ O(N * log(N))

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>
- -10<sup>6</sup> ≤ A<sub>i</sub> ≤ 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
int *greaterElement(int arr[], int n);
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for (int i = 0; i < n; i++)
        {
            if (b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

int *greaterElement(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    for (int i = 0; i < n; i++)
    {
        auto indx = s.upper_bound(arr[i]);
        if (indx != s.end())
            arr[i] = *indx;
        else
            arr[i] = -10000000;
    }
    return arr;
}
```