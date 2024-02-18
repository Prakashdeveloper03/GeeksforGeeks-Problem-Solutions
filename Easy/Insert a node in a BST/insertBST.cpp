#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int val) {
    data = val;
    left = right = NULL;
  }
};

class Solution {
 public:
  Node* insert(Node* root, int data) {
    if (!root) {
      return new Node(data);
    }
    if (root->data == data) {
      return root;
    } else if (data > root->data) {
      root->right = insert(root->right, data);
    } else {
      root->left = insert(root->left, data);
    }
    return root;
  }
};

Node* buildTree(string str) {
  if (str.length() == 0 || str[0] == 'N') return NULL;
  vector<string> ip;

  istringstream iss(str);
  for (string str; iss >> str;) ip.push_back(str);
  Node* root = new Node(stoi(ip[0]));
  queue<Node*> queue;
  queue.push(root);
  int i = 1;
  while (!queue.empty() && i < ip.size()) {
    Node* currNode = queue.front();
    queue.pop();
    string currVal = ip[i];
    if (currVal != "N") {
      currNode->left = new Node(stoi(currVal));
      queue.push(currNode->left);
    }
    i++;
    if (i >= ip.size()) break;
    currVal = ip[i];
    if (currVal != "N") {
      currNode->right = new Node(stoi(currVal));
      queue.push(currNode->right);
    }
    i++;
  }
  return root;
}

void inorder(Node* root, vector<int>& v) {
  if (root == NULL) return;

  inorder(root->left, v);
  v.push_back(root->data);
  inorder(root->right, v);
}

int main() {
  int t;
  string tc;
  getline(cin, tc);
  t = stoi(tc);
  while (t--) {
    string s;
    getline(cin, s);
    Node* root = buildTree(s);

    getline(cin, s);
    int k = stoi(s);
    Solution ob;
    ob.insert(root, k);
    vector<int> v;
    inorder(root, v);
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
  }
  return 0;
}