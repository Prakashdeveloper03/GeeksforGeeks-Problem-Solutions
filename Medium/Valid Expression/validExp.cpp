#include <bits/stdc++.h>
using namespace std;
bool valid(string str);
int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string str;
    getline(cin, str);
    cout << valid(str) << endl;
  }
  return 0;
}

bool valid(string s) {
  stack<char> st;
  for (auto i : s) {
    if (st.empty() && (i == ')' || i == ']' || i == '}')) {
      return false;
    } else if (i == '(' || i == '[' || i == '{') {
      st.push(i);
    } else if (!st.empty() && st.top() == '[' && i == ']') {
      st.pop();
    } else if (!st.empty() && st.top() == '(' && i == ')') {
      st.pop();
    } else if (!st.empty() && st.top() == '{' && i == '}') {
      st.pop();
    } else
      return false;
  }
  if (st.size() == 0)
    return true;
  return false;
}