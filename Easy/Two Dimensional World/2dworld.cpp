#include <iostream>
using namespace std;
void twoDimensional(int **mat, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int testcase;
  cin >> testcase;
  while (testcase--) {
    int N;
    cin >> N;
    int **mat;
    mat = new int *[N];
    for (int i = 0; i < N; i++) {
      mat[i] = new int[N];
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        cin >> mat[i][j];
      }
    }
    twoDimensional(mat, N);
  }
  return 0;
}