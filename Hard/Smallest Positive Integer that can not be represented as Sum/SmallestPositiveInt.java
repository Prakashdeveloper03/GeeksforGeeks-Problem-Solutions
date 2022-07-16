import java.io.*;
import java.util.*;

public class SmallestPositiveInt {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            long array[] = new long[n];
            for (int i = 0; i < n; ++i) {
                array[i] = sc.nextLong();
            }
            Solution ob = new Solution();
            System.out.println(ob.smallestpositive(array, n));
            t--;
        }
        sc.close();
    }
}

class Solution {
    long smallestpositive(long[] array, int n) {
        Arrays.sort(array);
        long ans = 1;
        for (int i = 0; i < n; i++) {
            if (ans < array[i])
                return ans;
            else
                ans += array[i];
        }
        return ans;
    }
}