import java.io.*;
import java.util.*;

class GFG {
  public static void main(String args[]) throws IOException {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(in.readLine());
    while (t-- > 0) {
      int N = Integer.parseInt(in.readLine());
      String S = in.readLine();

      Solution ob = new Solution();
      System.out.println(ob.countWays(N, S));
    }
  }
}

class Solution {
  static int countWays(int n, String s) {
    String op = "";
    String op1 = "";
    for (int i = 0; i < s.length(); i++) {
      if (s.charAt(i) == '&' || s.charAt(i) == '|' || s.charAt(i) == '^') {
        op += s.charAt(i);
      } else {
        op1 += s.charAt(i);
      }
    }
    int t = op1.length();
    int dpt[][] = new int[t][t];
    int dpf[][] = new int[t][t];
    for (int g = 0; g < t; g++) {
      for (int i = 0, j = g; j < t; i++, j++) {
        if (g == 0) {
          char ch = op1.charAt(i);
          if (ch == 'T') {
            dpt[i][j] = 1;
            dpf[i][j] = 0;
          } else {
            dpt[i][j] = 0;
            dpf[i][j] = 1;
          }
        } else {
          for (int k = i; k < j; k++) {
            char opt = op.charAt(k);
            int ltc = dpt[i][k];
            int rtc = dpt[k + 1][j];
            int lfc = dpf[i][k];
            int rfc = dpf[k + 1][j];
            if (opt == '&') {
              dpt[i][j] += (ltc * rtc) % 1003;
              dpf[i][j] += (ltc * rfc + rfc * lfc + rtc * lfc) % 1003;
            } else if (opt == '|') {
              dpt[i][j] += (ltc * rtc + ltc * rfc + lfc * rtc) % 1003;
              dpf[i][j] += (lfc * rfc) % 1003;
            } else {
              dpt[i][j] += (lfc * rtc + ltc * rfc) % 1003;
              dpf[i][j] += (lfc * rfc + rtc * ltc) % 1003;
            }
          }
        }
      }
    }
    return dpt[0][t - 1] % 1003;
  }
}
