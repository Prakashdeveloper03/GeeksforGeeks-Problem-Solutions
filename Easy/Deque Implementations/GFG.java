import java.util.ArrayDeque;
import java.util.Scanner;

class GFG {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
      ArrayDeque<Integer> dq = new ArrayDeque<>();
      int queries = sc.nextInt();
      while (queries-- > 0) {
        String s = sc.next().trim();
        if (s.equals("pb")) {
          int x = Integer.parseInt(sc.nextLine().trim());

          push_back_pb(dq, x);
          System.out.println(dq.peekLast());
        } else if (s.equals("pf")) {
          int x = Integer.parseInt(sc.nextLine().trim());

          push_front_pf(dq, x);
          System.out.println(dq.peekFirst());
        } else if (s.equals("pp_b")) {
          pop_back_ppb(dq);
          System.out.println(dq.size());
        } else {
          int x = front_dq(dq);
          System.out.println(x);
        }
      }
    }
    sc.close();
  }

  public static void push_back_pb(ArrayDeque<Integer> dq, int x) {
    dq.offerLast(x);
  }

  public static void pop_back_ppb(ArrayDeque<Integer> dq) {
    dq.pollLast();
  }

  public static int front_dq(ArrayDeque<Integer> dq) {
    if (dq.isEmpty()) {
      return -1;
    }

    return dq.peekFirst();
  }

  public static void push_front_pf(ArrayDeque<Integer> dq, int x) {
    dq.offerFirst(x);
  }
}
