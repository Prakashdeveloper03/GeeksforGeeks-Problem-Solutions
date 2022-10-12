class Solution:
    def isPossible(self, N, arr):
        return 1 if sum(arr) % 3 == 0 else 0


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for i in range(N):
            arr[i] = int(arr[i])
        ob = Solution()
        print(ob.isPossible(N, arr))
