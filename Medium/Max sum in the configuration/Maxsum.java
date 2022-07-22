import java.util.*;

class Maxsum {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = sc.nextInt();

            System.out.println(new GfG().max_sum(arr, n));
            t--;
        }
        sc.close();
    }
}

class GfG {
    int max_sum(int A[], int N) {
        int sum = 0, prev = 0;
        int i;
        for (i = 0; i < N; i++) {
            sum += A[i];
            prev += (A[i] * i);
        }

        int mx = prev;
        for (i = 1; i < N; i++) {
            prev = prev - sum + A[i - 1] + A[i - 1] * (N - 1);
            mx = Math.max(mx, prev);
        }
        return mx;
    }
}
