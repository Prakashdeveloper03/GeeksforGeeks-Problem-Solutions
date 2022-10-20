import java.io.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            String[] S1 = br.readLine().trim().split(" ");
            int A = Integer.parseInt(S1[0]);
            int B = Integer.parseInt(S1[1]);
            int C = Integer.parseInt(S1[2]);
            Solution ob = new Solution();
            double[] ans = ob.FindRoots(A, B, C);
            if (ans.length == 1) {
                System.out.println((int) ans[0]);
                continue;
            }
            for (int i = 0; i < ans.length; i++)
                System.out.print(String.format("%6f", ans[i]) + " ");
            System.out.println();
        }
    }
}

class Solution {
    public double[] FindRoots(int A, int B, int C) {
        double root_det = B * B - 4 * A * C;
        if (root_det < 0)
            return new double[] { -1.0 };
        root_det = Math.sqrt(root_det);
        double r2 = (-B + root_det) / (2 * A);
        double r1 = (-B - root_det) / (2 * A);
        if (r2 > r1) {
            double temp = r2;
            r2 = r1;
            r1 = temp;
        }
        return new double[] { r2, r1 };
    }
}