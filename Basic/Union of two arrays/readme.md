# Union of two arrays
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two arrays `a[]` and `b[]` of size `n` and `m` respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

__Example 1:__
```
Input:
5 3
1 2 3 4 5
1 2 3
Output:
5
Explanation:
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
```
__Example 2:__
```
Input:
6 2
85 25 1 32 54 6
85 2
Output:
7
Explanation:
85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.
```
__Your Task__

Complete **doUnion** funciton that takes **a, n, b, m as parameters** and **returns the count of union elements of the two arrays**. The printing is done by the driver code.

__Expected Time Complexity:__ O((n+m)log(n+m))

__Expected Auxiliary Space:__ O(n+m)

__Constraints:__
- 1 ≤ n, m ≤ 10<sup>5</sup>
- 0 ≤ a[i], b[i] ≤ 10<sup>5</sup>

### Solution
```cpp
class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        set<int> s(a, a + n);
        for (int j = 0; j < m; j++)
            s.insert(b[j]);
        return s.size();
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
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        Solution obj;
        cout << obj.doUnion(a, n, b, m) << endl;
    }
    return 0;
}
```

