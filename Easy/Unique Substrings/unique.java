import java.io.*;
import java.util.*;

class GFG {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    sc.nextLine();
    while (t-- > 0) {
      String str = sc.nextLine();
      Solution ob = new Solution();
      System.out.println(ob.unique_substring(str));
    }
  }
}

class Solution {
  public int unique_substring(String str) {
    HashSet<String> set = new HashSet<String>();
    String ans = "";
    for (int i = 0; i < str.length(); i++) {
      ans += str.charAt(i);
      set.add(ans);
      for (int j = i + 1; j < str.length(); j++) {
        ans += str.charAt(j);
        set.add(ans);
      }
      ans = "";
    }
    return set.size();
  }
}
