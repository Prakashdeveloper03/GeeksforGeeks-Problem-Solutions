import java.util.*;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a[], b;
            a = new int[n][n];
            b = new int[n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int p = sc.nextInt();
                    a[i][j] = p;
                }
            }
            for (int i = 0; i < n; i++) {
                int p = sc.nextInt();
                b[i] = p;
            }
            Complete obj = new Complete();
            ArrayList<Integer> ans;
            ans = obj.array(a, b, n);
            for (int i : ans)
                System.out.print(i + " ");
            System.out.println();
        }
        sc.close();
    }
}

class Complete {
    public ArrayList<Integer> array(int a[][], int b[], int n) {
        ArrayList<Integer> c = new ArrayList<Integer>();
        int max = Arrays.stream(b).max().getAsInt();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + a[i][i];
        }
        c.add(sum);
        c.add(max);
        return c;
    }
}
