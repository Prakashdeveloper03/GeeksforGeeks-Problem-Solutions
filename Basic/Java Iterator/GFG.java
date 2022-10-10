import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S[] = read.readLine().split(" ");
            int n = Integer.parseInt(S[0]);
            int k = Integer.parseInt(S[1]);

            int[] arr = new int[n];
            String S1[] = read.readLine().split(" ");

            for (int i = 0; i < n; i++)
                arr[i] = Integer.parseInt(S1[i]);

            Solution ob = new Solution();
            System.out.println(ob.javaIterator(n, k, arr));
        }
    }
}

class Solution {
    ArrayList<Integer> javaIterator(int n, int k, int[] arr) {
        ArrayList<Integer> arrList = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arrList.add(arr[i]);
        }
        Iterator<Integer> it = arrList.iterator();
        while (it.hasNext()) {
            int m = it.next();
            if (m < k)
                it.remove();
        }
        Collections.sort(arrList);
        return arrList;
    }
};