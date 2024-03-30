import java.io.*;
import java.util.*;

class GFG {
  public static void main(String[] args) {
    Scanner ob = new Scanner(System.in);
    int t = ob.nextInt();
    while (t-- > 0) {
      long n = ob.nextLong();
      Solution ab = new Solution();
      long k = ab.findNth(n);
      System.out.println(k);
    }
  }
}

class Solution {
  long findNth(long N) {
    long result = 0;
    long mul = 1;
    while (N > 0) {
      long num = N % 9;
      if (num >= 9) {
        num++;
      }
      result += num * mul;
      mul *= 10;
      N /= 9;
    }
    return result;
  }
}
