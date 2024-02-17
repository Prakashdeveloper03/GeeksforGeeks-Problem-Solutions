import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class GFG {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int T = Integer.parseInt(br.readLine().trim());
    while (T-- > 0) {
      int N = Integer.parseInt(br.readLine().trim());
      Solution ob = new Solution();
      int ans = ob.isPrime(N);
      System.out.println(ans);
    }
  }
}

class Solution {
  public int isPrime(int N) {
    if (N == 0 || N == 1) {
      return 0;
    }
    for (int i = 2; i <= Math.sqrt(N); i++) {
      if (N % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}
