# Count Numbers in Range
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

A critical connection refers to an edge that, upon removal, will make it impossible for certain nodes to reach each other through any path. You are given an undirected connected graph with `v` vertices and `e` edges and each vertex distinct and ranges from `0` to `v-1`, and you have to find all critical connections in the graph. It is ensured that there is at least one such edge present.

Note: The answers may be presented in various potential orders. Each edge should be displayed in __sorted order__. For instance, if there's an edge between node 1 and node 2, it should be stored as (1,2) rather than (2,1). Additionally, it is expected that you store the edges in sorted order.

__Example 1:__
```
Input:
0 1 1
1 0 0
1 0 0

Output:
0 1
0 2

Explanation: 
On removing edge (0, 1), you will not be able to
reach node 0 and 2 from node 1. Also, on removing
edge (0, 2), you will not be able to reach node 0
and 1 from node 2.
```
__Example 2:__
```
Input:
0 1 1 0
1 0 1 0
1 1 0 1
0 0 1 0

Output:
2 3

Explanation:
The edge between nodes 2 and 3 is the only
Critical connection in the given graph.
```
__Your Task__

You dont need to read input or print anything. Your task is to complete the function **criticalConnections()** which takes the integer v denoting the number of vertices and an adjacency list adj as input parameters and returns  a list of lists containing the Critical connections in the sorted order.

__Expected Time Complexity:__ O(v + e)

__Expected Auxiliary Space:__  O(v)

__Constraints:__
- 1 <=  v, e <= 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    void dfs(int node, int parent, vector<int> &low, vector<int> &tin, vector<int> &vis, vector<int> adj[], int &timer,
             vector<vector<int>> &bridges)
    {
        vis[node] = 1;
        low[node] = timer;
        tin[node] = timer;
        timer++;
        for (auto nbr : adj[node])
        {
            if (nbr == parent)
                continue;
            else if (!vis[nbr])
            {
                dfs(nbr, node, low, tin, vis, adj, timer, bridges);
                low[node] = min(low[node], low[nbr]);
                if (low[nbr] > tin[node])
                {
                    if (nbr > node)
                        bridges.push_back({node, nbr});
                    else
                        bridges.push_back({nbr, node});
                }
            }
            else
            {
                low[node] = min(low[node], low[nbr]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int v, vector<int> adj[])
    {
        vector<vector<int>> bridges;
        vector<int> low(v, 0);
        vector<int> tin(v, 0);
        vector<int> vis(v, 0);
        int parent = -1;
        int timer = 0;
        dfs(0, parent, low, tin, vis, adj, timer, bridges);
        sort(bridges.begin(), bridges.end());
        return bridges;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        vector<vector<int>> ans = obj.criticalConnections(V, adj);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}
```