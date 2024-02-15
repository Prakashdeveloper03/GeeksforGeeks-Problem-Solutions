#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int save_gotham(int arr[], int n) {
    stack<long long> st;
    vector<long long> ans(n);
    for (int i = n - 1; i >= 0; i--) {
      while (!st.empty() && st.top() <= arr[i]) {
        st.pop();
      }
      if (st.empty())
        ans[i] = -1;
      else
        ans[i] = st.top();
      st.push(arr[i]);
    }
    int count = 0;
    for (int i : ans) {
      if (i != -1) {
        count += i;
      }
    }
    return count;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    Solution obj;
    cout << obj.save_gotham(arr, n) << endl;
  }
  return 0;
}