# Count all Possible Path
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/Sublime_Text-%23575757?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are presented with an undirected connected graph consisting of n vertices and connections between them represented by an adjacency matrix. Your objective is to determine whether it is possible to start traversing from a node, x, and return to it after traversing all the vertices at least once, using each edge exactly once.

__Example 1:__
```
Input: 
paths = 0 1 1 1 1
        1 0 0 1 0
        1 0 0 1 0
        1 1 1 0 1
        1 0 0 1 0
Output: 1
Explanation: 
One can visit the vertices in the following way:
1->3->4->5->1->4->2->1 (assuming 1-based indexing)
Here all the vertices has been visited and all
paths are used exactly once.
```
__Example 2:__
```
Input: 
paths = 0 1 1 0
        1 0 1 1
        1 1 0 0
        0 1 0 0
Output: 0
Explanation: 
There exists no such vertex from which all the 
vertices could be visited and all edges are used 
exactly once.
```
__Your Task__

You don't need to read or print anything. Your task is to complete the function __isPossible()__ which takes adjacency matrix paths as an input parameter and returns 1 if it is possible to start traversing from a node, x, and come back to it after traversing all the vertices at least once, using each edge exactly once.

__Expected Time Complexity:__ O(n<sup>2</sup>)

__Expected Auxiliary Space:__  O(1)

__Constraints:__
- 1 <= n <= 100
- 0 <= paths[i][j] <= 1

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int isPossible(vector<vector<int>> paths)
    {
        for (auto path : paths)
        {
            if (accumulate(path.begin(), path.end(), 0) % 2 != 0)
                return false;
        }
        return true;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> paths(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> paths[i][j];
        }
        Solution obj;
        int ans = obj.isPossible(paths);
        cout << ans << "\n";
    }
    return 0;
}
```