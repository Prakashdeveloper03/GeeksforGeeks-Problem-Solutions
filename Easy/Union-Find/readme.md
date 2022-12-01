# Union Find
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

This problem is to implement disjoint set union. There will be 2 incomplete functions namely union and find. You have to complete these functions.

**Union:** Join two subsets into a single set.

**isConnected:** Determine which subset a particular element is in. This can be used for determining if two elements are in same subset.

__Example 1:__
```
Input:
N = 5
q = 4
Queries =
Union(1,3)
isConnected(1,2)
Union(1,5)
isConnected(3,5)
Output:
0
1
Explanation: Initially all nodes 1 2 3 4 5
are not connected.
After Union(1,3), node 1 and 3 will be
connected.
When we do isConnected(1,2),  as node 1
and 2 are not connected it will return 0.
After Union(1,5), node 1 and 5 will be
connected.
When we do isConnected(3,5),  as node
1 and 3 are connected, and node 1 and 5
are connected, hence 3 and 5 are
connected. Thus it will return 1.
```
__Example 2:__
```
Input:
N = 5
q = 4
Queries =
Union(1,4)
Union(1,5)
isConnected(2,3)
Union(3,4)
Output: 0
```
__Your Task__

You have to complete the function **union_()** which merges the node1 and node2. You will also have to complete the function **isConnected()** which will return whether the two nodes are connected.

**Note:** Both function will contain two arrays **par[]** and **ranks1[]** along with two nodes. Initially **par[i] = i** and **rank1[i] = 1**

__Expected Time Complexity:__ O(N + Q)

__Expected Auxiliary Space:__ O(Log N)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>
- 1 <= Q <= 10<sup>5</sup>
- 1 <= node1, node2 <= N

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int find(int a, int par[])
    {
        if (a == par[a])
            return a;
        return par[a] = find(par[a], par);
    }

    void union_(int a, int b, int par[], int rank1[])
    {
        a = find(a, par), b = find(b, par);
        if (rank1[a] >= rank1[b])
            par[b] = a, rank1[a]++;
        else
            par[a] = b, rank1[b]++;
    }

    bool isConnected(int x, int y, int par[], int rank1[])
    {
        return find(x, par) == find(y, par);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, r;
        cin >> n;
        int par[n + 1];
        int rank1[n + 1];
        for (int i = 0; i < n; i++)
        {
            par[i] = i;
            rank1[i] = 1;
        }
        Solution obj;
        int q;
        cin >> q;
        while (--q)
        {
            int a, b;
            char c;
            cin >> c >> a >> b;
            if (c == 'U')
                obj.union_(a, b, par, rank1);
            else
                cout << obj.isConnected(a, b, par, rank1) << endl;
        }
    }
    return 0;
}
```

