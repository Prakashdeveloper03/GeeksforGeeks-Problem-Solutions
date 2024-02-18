import java.io.*;
import java.util.*;

public class Geeks {
  public void insert(PriorityQueue<Integer> q, int k) {
    q.add(k);
  }

  public boolean find(PriorityQueue<Integer> q, int k) {
    return q.contains(k);
  }

  public int delete(PriorityQueue<Integer> q) {
    return q.poll();
  }
}

class GFG {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int testcase = sc.nextInt();
    while (testcase-- > 0) {
      PriorityQueue<Integer> p_queue = new PriorityQueue<Integer>(new Comparator<Integer>() {
        public int compare(Integer w1, Integer w2) {
          return w2.compareTo(w1);
        }
      });
      int n = sc.nextInt();
      Geeks obj = new Geeks();
      for (int i = 0; i < n; i++) {
        int k = sc.nextInt();
        obj.insert(p_queue, k);
      }
      int x = sc.nextInt();
      for (int i = 0; i < x; i++) {
        int k = sc.nextInt();
        boolean f = obj.find(p_queue, k);
        if (f != false) {
          System.out.println("1");
          System.out.println(obj.delete(p_queue));
        } else {
          System.out.println("-1");
        }
      }
    }
  }
}
