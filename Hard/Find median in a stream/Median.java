import java.util.*;

class Median {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n;
        while (t-- > 0) {
            n = sc.nextInt();
            Solution obj = new Solution();
            for (int i = 1; i <= n; i++) {
                int x = sc.nextInt();
                obj.insertHeap(x);
                System.out.println((int) Math.floor(obj.getMedian()));
            }
        }
        sc.close();
    }
}

class Solution {
    public static PriorityQueue<Integer> max = new PriorityQueue<>((a, b) -> b - a);
    public static PriorityQueue<Integer> min = new PriorityQueue<>();

    public void insertHeap(int x) {
        if (max.isEmpty() || x <= max.peek()) {
            max.add(x);
        } else {
            min.add(x);
        }

        balanceHeaps();
    }

    public void balanceHeaps() {
        if (max.size() > min.size() + 1) {
            min.add(max.poll());
        } else if (min.size() > max.size()) {
            max.add(min.poll());
        }

        getMedian();
    }

    public double getMedian() {
        if (max.size() == min.size()) {
            return (max.peek() + min.peek()) / 2.0;
        } else {
            return max.peek();
        }
    }
}