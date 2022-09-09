class Solution:
    def kthSmallest(self, arr, l, r, k):
        arr.sort()
        return arr[k - 1]


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        k = int(input())
        print(Solution().kthSmallest(arr, 0, n - 1, k))
