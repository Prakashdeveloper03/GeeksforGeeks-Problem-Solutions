import java.io.*;
import java.util.*;

class GFG {
  public static void main(String args[]) throws IOException {
    BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(read.readLine());
    while (t-- > 0) {
      double[][] Arr = new double[3][4];
      for (int i = 0; i < 3; i++) {
        String input_line[] = read.readLine().trim().split("\\s+");
        for (int j = 0; j < 4; j++) {
          Arr[i][j] = Double.parseDouble(input_line[j]);
        }
      }
      Solution ob = new Solution();
      double[] ans = ob.myCalculator(Arr);
      for (int i = 0; i < ans.length; i++) {
        if (isInteger(ans[i])) System.out.print((int) ans[i] + " ");
        else System.out.print(ans[i] + " ");
      }
      System.out.println();
    }
  }

  public static boolean isInteger(double N) {
    int X = (int) N;
    double temp2 = N - X;
    if (temp2 > 0) {
      return false;
    }
    return true;
  }
}

class Solution {
  public double[] myCalculator(double[][] arr) {
    double[][] mat = new double[3][3];
    double det = 0;
    for (int i = 0; i < 3; i++) {
      det +=
          (arr[0][i]
              * ((arr[1][(i + 1) % 3] * arr[2][(i + 2) % 3])
                  - (arr[1][(i + 2) % 3] * arr[2][(i + 1) % 3])));
    }
    if (det == 0) return new double[] {0};
    for (int col = 0; col < 3; col++) {
      for (int row = 0; row < 3; row++) {
        mat[col][row] =
            ((arr[(row + 1) % 3][(col + 1) % 3] * arr[(row + 2) % 3][(col + 2) % 3])
                    - (arr[(row + 1) % 3][(col + 2) % 3] * arr[(row + 2) % 3][(col + 1) % 3]))
                / det;
      }
    }
    double[] ans = new double[3];
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        ans[i] += mat[i][j] * arr[j][3];
      }
    }
    for (int i = 0; i < 3; i++) ans[i] = Math.floor(ans[i]);
    return ans;
  }
}
