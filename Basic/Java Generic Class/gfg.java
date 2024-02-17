import java.util.Scanner;

class gfg {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (t-- > 0) {
      int n = sc.nextInt();
      if (n == 1) {
        String s = sc.next();
        GenericClass<String> Str = new GenericClass<String>(s);
        Str.showType();
      } else {
        Integer p = sc.nextInt();
        GenericClass<Integer> integer = new GenericClass<Integer>(p);
        integer.showType();
      }
    }
    sc.close();
  }
}

class GenericClass<T> {
  private T res;

  GenericClass(T res) {
    this.res = res;
  }

  void showType() {
    System.out.println(res.getClass().getSimpleName());
    System.out.println(res);
  }
}
