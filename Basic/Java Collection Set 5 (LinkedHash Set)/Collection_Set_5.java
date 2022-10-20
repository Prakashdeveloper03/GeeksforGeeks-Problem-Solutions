import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Scanner;

class Collections_Set_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            LinkedHashSet<Integer> s = new LinkedHashSet<Integer>();
            int q = sc.nextInt();

            while (q > 0) {
                GfG g = new GfG();
                char c = sc.next().charAt(0);
                if (c == 'a') {
                    int x = sc.nextInt();
                    g.insert(s, x);
                }
                if (c == 'b') {
                    g.print_Contents_Increasing_Order(s);
                }
                if (c == 'c') {
                    int x = sc.nextInt();
                    g.erase(s, x);
                }
                if (c == 'd') {
                    int x = sc.nextInt();
                    System.out.print(g.find(s, x) + " ");
                }
                if (c == 'e') {
                    System.out.print(g.size(s) + " ");
                }
                if (c == 'f') {
                    g.print_Contents_Insertion_Order(s);
                }
                q--;
            }
            t--;
            System.out.println();
        }
        sc.close();
    }
}

class GfG {
    void insert(LinkedHashSet<Integer> s, int x) {
        s.add(x);
    }

    void print_Contents_Increasing_Order(LinkedHashSet<Integer> s) {
        ArrayList<Integer> list = new ArrayList<Integer>(s);
        Collections.sort(list);
        for (Integer i : list)
            System.out.print(i + " ");
    }

    void print_Contents_Insertion_Order(LinkedHashSet<Integer> s) {
        Iterator it = s.iterator();
        while (it.hasNext())
            System.out.print(it.next() + " ");
    }

    void erase(LinkedHashSet<Integer> s, int x) {
        s.remove(x);
    }

    int size(LinkedHashSet<Integer> s) {
        return s.size();
    }

    int find(LinkedHashSet<Integer> s, int x) {
        if (s.contains(x))
            return 1;
        else
            return -1;
    }
}