#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<set<int>> setOperations(set<int> A, set<int> B) {
    vector<set<int>> res;

    vector<int> tempVec;
    set<int> tempS;

    set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(tempVec));

    tempS.insert(tempVec.begin(), tempVec.end());
    res.emplace_back(tempS);

    tempVec.clear();
    tempS.clear();

    set_difference(A.begin(), A.end(), B.begin(), B.end(),
                   back_inserter(tempVec));

    if (tempVec.empty()) {
      tempVec.emplace_back(0);
    }

    tempS.insert(tempVec.begin(), tempVec.end());
    res.emplace_back(tempS);

    tempVec.clear();
    tempS.clear();

    set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                     back_inserter(tempVec));

    if (tempVec.empty()) {
      tempVec.emplace_back(0);
    }

    tempS.insert(tempVec.begin(), tempVec.end());
    res.emplace_back(tempS);

    tempVec.clear();
    tempS.clear();

    return res;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, M;
    cin >> N >> M;
    set<int> A, B;
    int x;
    for (int i = 0; i < N; i++) {
      cin >> x;
      A.insert(x);
    }
    for (int i = 0; i < M; i++) {
      cin >> x;
      B.insert(x);
    }
    Solution obj;
    vector<set<int>> result = obj.setOperations(A, B);
    for (int i = 0; i < 3; i++) {
      for (auto &it : result[i]) {
        cout << it << " ";
      }
      cout << endl;
    }
  }
  return 0;
}