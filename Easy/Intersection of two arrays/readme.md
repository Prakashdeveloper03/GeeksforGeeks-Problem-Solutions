# Intersection of two arrays
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two arrays `a[]` and `b[]` respectively of size `n` and `m`, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays.

__Example 1:__
```
Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation:
89 is the only element
in the intersection of two arrays.
```
__Example 2:__
```
Input:
n = 6, m = 5
a[] = {1, 2, 3, 4, 5, 6}
b[] = {3, 4, 5, 6, 7}

Output: 4

Explanation:
3 4 5 and 6 are the elements
in the intersection of two arrays.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function __NumberofElementsInIntersection()__ which takes two integers `n` and `m` and their respective arrays `a[]` and `b[]`  as input. The function should return the count of the number of elements in the intersection.

__Expected Time Complexity:__ O(n + m)

__Expected Auxiliary Space:__ O(min(n,m))

__Constraints:__
- 1 ≤ n, m ≤ 10<sup>5</sup>
- 1 ≤ a[i], b[i] ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        set<int> s(a, a + n);
        int count = 0;
        for (int i = 0; i < m; i++)
            if (s.find(b[i]) != s.end())
            {
                count++;
                s.erase(b[i]);
            }
        return count;
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
        int a[100], b[100];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        Solution obj;
        cout << obj.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
```

