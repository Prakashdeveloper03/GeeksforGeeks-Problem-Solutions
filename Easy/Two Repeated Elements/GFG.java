import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            String l = br.readLine();
            String[] sarr = l.split(" ");
            int[] arr = new int[sarr.length];
            for (int i1 = 0; i1 < arr.length; i1++) {
                arr[i1] = Integer.parseInt(sarr[i1]);
            }
            Solution obj = new Solution();
            int[] res = obj.twoRepeated(arr, n);
            System.out.println(res[0] + " " + res[1]);
        }
    }
}

class Solution {
    public int[] twoRepeated(int arr[], int N) {
        int ans[] = new int[2];
        int idx = 0;
        for (int i = 0; i < N + 2; i++) {
            arr[arr[i] % (N + 1)] += N + 1;
            if (arr[arr[i] % (N + 1)] / (N + 1) == 2) {
                ans[idx] = arr[i] % (N + 1);
                idx++;
            }
        }
        return ans;
    }
}