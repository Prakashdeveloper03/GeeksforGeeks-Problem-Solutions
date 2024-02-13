# Clone an Undirected Graph
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/Sublime_Text-%23575757?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a connected undirected graph with n nodes and m edges, with each node having a distinct label from `0` to `n-1`, create a clone of the graph. Each node in the graph contains an integer `val` and an array (`neighbors`) of nodes, containing nodes that are adjacent to the current node.

**Note:** If the user returns a correct copy of the given graph, then the system will print 1; in the case when an incorrect copy is generated or when the user returns the original node, the system will print 0.

__Example 1:__
```
Input:
adjList = 
{
    {1, 3},
    {0, 2},
    {1, 3},
    {0, 2}
}
Output: 1
Explanation:
1 is the output that the driver code will print in case 
you successfully cloned the given graph.
```
__Example 2:__
```
Input:
adjList = 
{
    {1},
    {0}
}
Output: 1
Explanation: 
1 is the output that the driver code will print in case
you successfully cloned the given graph.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **cloneGraph()** which takes a node will always be the first node of the graph as input and returns the copy of the given node as a reference to the cloned graph.

__Expected Time Complexity:__ O(n + m)

__Expected Auxiliary Space:__  O(n)

__Constraints:__
- 1 <= n, m <= 10<sup>4</sup>
- 1 <= Node value <= n

### Solution
```cpp
class Solution {
private:
    unordered_map<Node*, Node*> mp;
public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        if(mp.find(node) == mp.end()) {
            mp[node] = new Node(node->val, {});
            for(Node* neighbor : node->neighbors) {
                mp[node]->neighbors.push_back(cloneGraph(neighbor));
            }
        }
        return mp[node];
    }
};
```