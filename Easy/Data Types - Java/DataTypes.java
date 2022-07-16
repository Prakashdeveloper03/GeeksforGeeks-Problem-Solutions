import java.util.Scanner;

class Geeks {
    public void dataTypes(int a, float b, double c, long l, byte d) {
        double p = c / b;
        double q = b / a;
        double r = c / a;
        double m = r + l;
        int s = a / d;
        System.out.println(p + " " + q + " " + r + " " + m + " " + s);
    }
}

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        float b;
        double c;
        long l;
        byte d;
        int t = sc.nextInt();
        while (t-- > 0) {
            a = sc.nextInt();
            b = sc.nextFloat();
            c = sc.nextDouble();
            l = sc.nextLong();
            d = sc.nextByte();
            Geeks g = new Geeks();
            g.dataTypes(a, b, c, l, d);
        }
        sc.close();
    }
}