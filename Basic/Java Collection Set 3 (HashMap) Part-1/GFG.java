import java.io.*;
import java.util.*;

class GFG {
  public static void main(String args[]) throws IOException {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(in.readLine());
    while (t-- > 0) {
      int n = Integer.parseInt(in.readLine());
      String a[] = in.readLine().trim().split("\\s+");
      String keys[] = new String[n];
      int arr[] = new int[n];
      for (int i = 0; i < n; i++) {
        keys[i] = a[2 * i];
        arr[i] = Integer.parseInt(a[2 * i + 1]);
      }
      String s = in.readLine();

      Solution ob = new Solution();
      System.out.println(ob.map(n, keys, arr, s));
    }
  }
}

class Solution {
  int map(int n, String keys[], int arr[], String s) {
    HashMap<String, Integer> hm = new HashMap<>();
    for (int i = 0; i < n; i++) {
      hm.put(keys[i], arr[i]);
    }

    if (hm.containsKey(s)) return hm.get(s);
    else return -1;
  }
}
