#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *newNode(int val) {
  Node *temp = new Node;
  temp->data = val;
  temp->left = NULL;
  temp->right = NULL;

  return temp;
}

Node *buildTree(string str) {
  if (str.length() == 0 || str[0] == 'N') return NULL;
  vector<string> ip;
  istringstream iss(str);
  for (string str; iss >> str;) ip.push_back(str);
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
    if (i >= ip.size()) break;
    currVal = ip[i];
    if (currVal != "N") {
      currNode->right = newNode(stoi(currVal));
      queue.push(currNode->right);
    }
    i++;
  }
  return root;
}

vector<int> postOrder(struct Node *root);

int main() {
  int t;
  cin >> t;
  getchar();
  while (t--) {
    string inp;
    getline(cin, inp);
    struct Node *root = buildTree(inp);

    vector<int> res = postOrder(root);
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
  }
  return 0;
}

void solve(Node *root, vector<int> &v) {
  if (root != NULL) {
    solve(root->left, v);
    solve(root->right, v);
    v.push_back(root->data);
  }
}

vector<int> postOrder(Node *root) {
  vector<int> v;
  solve(root, v);
  return v;
}