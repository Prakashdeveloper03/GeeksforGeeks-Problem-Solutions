import java.util.*;
import java.util.Scanner;

class HashMap_Set3 {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t > 0) {
      HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
      int q = sc.nextInt();
      while (q > 0) {
        GfG g = new GfG();
        char c = sc.next().charAt(0);
        if (c == 'a') {
          int x = sc.nextInt();
          int y = sc.nextInt();
          g.add_Value(hm, x, y);
        }
        if (c == 'b') {
          int y = sc.nextInt();
          System.out.print(g.find_value(hm, y) + " ");
        }
        if (c == 'c') System.out.print(g.getSize(hm) + " ");
        if (c == 'd') {
          int x = sc.nextInt();
          g.removeKey(hm, x);
        }
        q--;
      }
      System.out.println();
      t--;
    }
    sc.close();
  }
}

class GfG {
  /* Inserts an entry with key x and value y in map */
  void add_Value(HashMap<Integer, Integer> hm, int x, int y) {
    hm.put(x, y);
  }

  /* Returns the value with key x from the map */
  int find_value(HashMap<Integer, Integer> hm, int x) {
    if (hm.containsKey(x)) {
      return hm.get(x);
    } else {
      return -1;
    }
  }

  /* Returns the size of the map */
  int getSize(HashMap<Integer, Integer> hm) {
    return hm.size();
  }

  /* Removes the entry with key x from the map */
  void removeKey(HashMap<Integer, Integer> hm, int x) {
    hm.remove(x);
  }
}
