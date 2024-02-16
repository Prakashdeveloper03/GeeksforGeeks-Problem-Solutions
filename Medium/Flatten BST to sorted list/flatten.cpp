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