import java.io.*;
import java.util.*;

class Array {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
      int n = sc.nextInt();
      int arr[] = new int[n];
      for (int i = 0; i < n; i++) {
        arr[i] = sc.nextInt();
      }
      int key = sc.nextInt();
      Solution ob = new Solution();
      int ar[] = ob.findIndex(arr, n, key);
      System.out.println(ar[0] + " " + ar[1]);
    }
  }
}

class Solution {
  static int[] findIndex(int arr[], int n, int key) {
    int start = -1;
    int end = -1;
    for (int i = 0; i < n; i++) {
      if (arr[i] == key) {
        start = i;
        break;
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      if (arr[i] == key) {
        end = i;
        break;
      }
    }

    return new int[] {start, end};
  }
}
