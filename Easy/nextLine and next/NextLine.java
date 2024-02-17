import java.util.*;

class NextLine {
  public static void main(String[] args) {
    Geeks g = new Geeks();
    g.getInput();
  }
}

class Geeks {
  public void getInput() {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
      int a = sc.nextInt();
      sc.nextLine();
      String s = sc.nextLine();
      System.out.println(a);
      System.out.println(s);
    }
    sc.close();
  }
}
