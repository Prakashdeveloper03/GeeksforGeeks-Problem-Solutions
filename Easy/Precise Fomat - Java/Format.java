import java.util.*;

class Geeks {
  public void printInFormat(float a, float b) {
    float result = a / b;
    System.out.format(result + " " + "%.3f", result);
  }
}

class Format {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int testcases = sc.nextInt();
    while (testcases-- > 0) {
      float a = sc.nextFloat();
      float b = sc.nextFloat();
      Geeks g = new Geeks();
      g.printInFormat(a, b);
      System.out.println();
    }
    sc.close();
  }
}
