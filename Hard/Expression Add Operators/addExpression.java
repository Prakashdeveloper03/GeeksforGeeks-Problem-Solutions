import java.io.*;
import java.util.*;

class GFG {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t;
    t = Integer.parseInt(br.readLine());
    while (t-- > 0) {

      String S;
      S = br.readLine();

      int target;
      target = Integer.parseInt(br.readLine());

      Solution obj = new Solution();
      ArrayList<String> res = obj.addOperators(S, target);
      Collections.sort(res);
      for (String s : res) System.out.print(s + " ");
      System.out.println();
    }
  }
}

class Solution {
  public static ArrayList<String> addOperators(String S, int target) {

    aa = new ArrayList<>();
    addOperatorsR(0, S, target, "", 0, 0);
    return aa;
  }

  static ArrayList<String> aa;

  public static void addOperatorsR(
      int idx, String S, int target, String path, long val, long prev) {

    if (idx == S.length()) {

      if (val == target) {
        aa.add(path);
      }
      return;
    }

    for (int i = idx; i < S.length(); i++) {

      String c = S.substring(idx, i + 1);
      long cV = Long.parseLong(c);

      if (idx == 0) {
        addOperatorsR(i + 1, S, target, path + c, val + cV, cV);
      } else {
        addOperatorsR(i + 1, S, target, path + "+" + c, val + cV, cV);
        addOperatorsR(i + 1, S, target, path + "-" + c, val - cV, -cV);
        addOperatorsR(i + 1, S, target, path + "*" + c, val - prev + prev * cV, prev * cV);
      }

      if (c.charAt(0) == '0') break;
    }
  }
}
