import java.util.Scanner;

class Geeks {
    public void comment(int a, int b, int c) {
        System.out.println(a);
        // System.out.println(b);
        System.out.println(c);
    }
}

class Comment {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int testcase = sc.nextInt();
        while (testcase-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            Geeks g = new Geeks();
            g.comment(a, b, c);
        }
        sc.close();
    }
}