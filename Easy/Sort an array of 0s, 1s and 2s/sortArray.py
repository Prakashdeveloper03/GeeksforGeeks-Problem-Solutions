class Solution:
    def sort012(self, arr, n):
        arr = arr.sort()
        return arr


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().sort012(arr, n)
        for i in res:
            print(i, end=" ")
        print()
