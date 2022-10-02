import java.util.Scanner;

class Geeks {
    public void IOFunction() {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            System.out.println(sc.nextInt());
            System.out.println(sc.nextFloat());
            System.out.println(sc.nextLong());
            System.out.println(sc.nextByte());
            sc.nextLine();
            System.out.println(sc.nextLine());
        }
        sc.close();
    }
}

public class Input {
    public static void main(String[] args) {
        Geeks g = new Geeks();
        g.IOFunction();
    }
}