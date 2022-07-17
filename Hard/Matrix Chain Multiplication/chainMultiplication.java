import java.io.*;
import java.util.*;

class chainMultiplication {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(in.readLine());
            String input_line[] = in.readLine().trim().split("\\s+");
            int arr[] = new int[N];
            for (int i = 0; i < N; i++)
                arr[i] = Integer.parseInt(input_line[i]);

            Solution ob = new Solution();
            System.out.println(ob.matrixMultiplication(N, arr));
        }
    }
}

class Solution {
    static int f(int i, int j, int arr[], int dp[][]) {
        if (i == j)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int min = (int) 1e9;
        for (int k = i; k < j; k++) {

            int steps = (arr[i - 1] * arr[k] * arr[j]) + f(i, k, arr, dp) + f(k + 1, j, arr, dp);
            min = Math.min(min, steps);

        }
        return dp[i][j] = min;
    }

    public int matrixMultiplication(int N, int arr[]) {
        int dp[][] = new int[N][N];
        for (int a[] : dp) {
            Arrays.fill(a, -1);
        }
        return f(1, N - 1, arr, dp);
    }
}