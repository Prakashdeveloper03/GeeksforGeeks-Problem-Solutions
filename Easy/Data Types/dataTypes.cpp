#include <bits/stdc++.h>
using namespace std;

void dataTypes(int a, float b, double c, long long l, string d) {
  float p = b / c;
  double q = b / a;
  int r = c / a;
  long long m = r + l;
  cout << p << " " << q << " " << r << " " << m << endl;
  cout << d << " " << d[3] << endl;
}

int main() {
  int a;
  float b;
  double c;
  long long l;
  string d;
  int t;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c >> l >> d;
    dataTypes(a, b, c, l, d);
  }
  return 0;
}