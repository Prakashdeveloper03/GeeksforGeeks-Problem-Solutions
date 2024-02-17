#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node *left;
  Node *right;
};

vector<int> preorder(struct Node *root);

Node *newNode(int val) {
  Node *temp = new Node;
  temp->data = val;
  temp->left = NULL;
  temp->right = NULL;

  return temp;
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

int main() {
  int t;
  scanf("%d ", &t);
  while (t--) {
    string s;
    getline(cin, s);
    Node *root = buildTree(s);

    vector<int> res = preorder(root);
    for (int i : res)
      cout << i << " ";
    cout << endl;
  }
  return 0;
}

void solve(Node *root, vector<int> &v) {
  if (root != NULL) {
    v.push_back(root->data);
    solve(root->left, v);
    solve(root->right, v);
  }
}

vector<int> preorder(Node *root) {
  vector<int> v;
  solve(root, v);
  return v;
}