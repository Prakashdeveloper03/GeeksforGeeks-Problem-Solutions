import java.io.*;
import java.util.*;

class Driver {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
      int n = sc.nextInt();
      int[] a = new int[n];
      for (int i = 0; i < n; i++) a[i] = sc.nextInt();

      int m = sc.nextInt();
      int[] b = new int[m];
      for (int i = 0; i < m; i++) b[i] = sc.nextInt();

      double res = new GFG().medianOfArrays(n, m, a, b);

      if (res == (int) res) System.out.println((int) res);
      else System.out.println(res);
    }
  }
}

class GFG {
  static double medianOfArrays(int n, int m, int a[], int b[]) {
    int[] c = new int[a.length + b.length];
    System.arraycopy(a, 0, c, 0, a.length);
    System.arraycopy(b, 0, c, a.length, b.length);
    Arrays.sort(c);
    double ans = 0;
    if (c.length % 2 == 0) {
      ans = (double) (c[c.length / 2] + c[c.length / 2 - 1]) / 2;
    } else {
      ans = c[c.length / 2];
    }
    return ans;
  }
}
