#include <bits/stdc++.h>
using namespace std;
string encode(string src);
int main() {
  int T;
  cin >> T;
  while (T--) {
    string str;
    cin >> str;
    cout << encode(str) << endl;
  }
  return 0;
}

string encode(string src) {
  int count = 1;
  string res = "";
  res += src[0];
  for (int i = 1; i < src.length(); i++) {
    if (src[i] == src[i - 1]) {
      count++;
    } else {
      res += to_string(count);
      res += src[i];
      count = 1;
    }
  }
  res += to_string(count);
  return res;
}
