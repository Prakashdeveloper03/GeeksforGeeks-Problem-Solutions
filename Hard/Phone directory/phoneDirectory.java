import java.io.*;
import java.util.*;

class GFG {
  public static void main(String args[]) throws IOException {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(in.readLine());
    while (t-- > 0) {
      int n = Integer.parseInt(in.readLine());
      String contact[] = in.readLine().trim().split("\\s+");
      String s = in.readLine();

      Solution ob = new Solution();
      ArrayList<ArrayList<String>> ans = ob.displayContacts(n, contact, s);
      for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans.get(i).size(); j++) System.out.print(ans.get(i).get(j) + " ");
        System.out.println();
      }
    }
  }
}

class Solution {
  static ArrayList<ArrayList<String>> displayContacts(int n, String contacts[], String s) {
    ArrayList<ArrayList<String>> ans = new ArrayList<>();

    for (int i = 1; i <= s.length(); i++) {

      String prefix = s.substring(0, i);
      HashSet<String> hs = new HashSet<>();

      for (int j = 0; j < n; j++) {

        int len = contacts[j].length();

        if (len < i) {
          continue;
        } else {
          String prefixContact = contacts[j].substring(0, i);

          if (prefix.equals(prefixContact)) {
            hs.add(contacts[j]);
          }
        }
      }

      ArrayList<String> temp;
      if (hs.size() == 0) {

        temp = new ArrayList<>();
        temp.add("0");

      } else {

        temp = new ArrayList<>(hs);
        Collections.sort(temp);
      }

      ans.add(temp);
    }

    return ans;
  }
}
