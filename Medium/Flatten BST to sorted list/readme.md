# Flatten BST to sorted list
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/Sublime_Text-%23575757?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given a Binary Search Tree (BST) with n nodes, each node has a distinct value assigned to it. The goal is to flatten the tree such that, the left child of each element points to nothing (NULL), and the right child points to the next element in the sorted list of elements of the BST (look at the examples for clarity). You must accomplish this without using any extra storage, except for recursive calls, which are allowed.

__Note:__ If your BST does have a left child, then the system will print `a -1` and will skip it, resulting in an incorrect solution.

__Example 1:__
```
Input:
          5
        /    \
       3      7
      /  \    /   \
     2   4  6     8
Output: 2 3 4 5 6 7 8
Explanation: 
After flattening, the tree looks
like this
    2
     \
      3
       \
        4
         \
          5
           \
            6
             \
              7
               \
                8
Here, left of each node points
to NULL and right contains the
next node.
```
__Example 2:__
```
Input:
       5
        \
         8
       /   \
      7     9  
Output: 5 7 8 9
Explanation:
After flattening, the tree looks like this:
   5
    \
     7
      \
       8
        \
         9
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function __flattenBST()__ which takes root node of the BST as input parameter and returns the root node after transforming the tree.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= Number of nodes <= 10<sup>3</sup>
- 1 <= Data of a node <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int val) {
    data = val;
    left = NULL;
    right = NULL;
  }
};

Node *newNode(int key) {
  Node *node = new Node(key);
  return node;
}

Node *buildTree(string str) {
  if (str.length() == 0 || str[0] == 'N')
    return NULL;
  vector<string> ip;
  istringstream iss(str);
  for (string str; iss >> str;)
    ip.push_back(str);
  Node *root = newNode(stoi(ip[0]));
  queue<Node *> queue;
  queue.push(root);
  int i = 1;
  while (!queue.empty() && i < ip.size()) {
    Node *currNode = queue.front();
    queue.pop();
    string currVal = ip[i];
    if (currVal != "N") {
      currNode->left = newNode(stoi(currVal));
      queue.push(currNode->left);
    }
    i++;
    if (i >= ip.size())
      break;
    currVal = ip[i];
    if (currVal != "N") {
      currNode->right = newNode(stoi(currVal));
      queue.push(currNode->right);
    }
    i++;
  }
  return root;
}

void printList(Node *head) {
  while (head) {
    if (head->left)
      cout << "-1 ";
    cout << head->data << " ";
    head = head->right;
  }
  cout << "\n";
}

class Solution {
public:
  Node *prev = nullptr, *start = nullptr;
  Node *flattenBST(Node *root) {
    if (root == nullptr)
      return nullptr;

    flattenBST(root->left);

    if (prev != nullptr) {
      prev->right = root;
      prev->left = nullptr;
    }

    if (prev == nullptr) {
      start = root;
    }

    prev = root;

    flattenBST(root->right);
    prev->right = NULL;
    prev->left = NULL;
    return start;
  }
};

int main() {
  int t;
  scanf("%d ", &t);
  while (t--) {
    string str;
    getline(cin, str);
    Node *root = buildTree(str);
    Solution ob;
    auto ans = ob.flattenBST(root);
    printList(ans);
  }
  return 0;
}
```

