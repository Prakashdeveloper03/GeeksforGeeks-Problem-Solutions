import java.util.Scanner;
import java.util.TreeSet;

class gfg {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
      TreeSet<String> ts = new TreeSet<>();
      int n = sc.nextInt();
      ;
      for (int i = 0; i < n; i++) {
        String s = sc.next();
        ts.add(s);
      }
      char a = sc.next().charAt(0);
      char b = sc.next().charAt(0);
      char c = sc.next().charAt(0);
      char d = sc.next().charAt(0);
      gfg1 obj = new gfg1();
      obj.task(ts, a, b, c, d);
    }
    sc.close();
  }
}

class gfg1 {
  void task(TreeSet<String> ts, char a, char b, char c, char d) {
    System.out.println(ts.headSet(a + ""));
    System.out.println(ts.tailSet(b + ""));
    System.out.println(ts.subSet(c + "", d + ""));
  }
}
