import java.util.*;

class PalindromicArray {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
      int n = sc.nextInt();
      int[] a = new int[n];
      for (int i = 0; i < n; i++) a[i] = sc.nextInt();
      GfG g = new GfG();
      System.out.println(g.palinArray(a, n));
    }
  }
}

class GfG {
  public static int palinArray(int[] a, int n) {
    for (int i = 0; i < n; i++) {
      int rem = 0;
      int reverse = 0;
      int num = a[i];
      while (num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
      }
      if (reverse != a[i]) {
        return 0;
      }
    }
    return 1;
  }
}
