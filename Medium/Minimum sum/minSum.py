class Solution:
    def solve(self, arr, n):
        arr.sort()
        n1 = 0
        n2 = 0
        for i in range(n):
            if i % 2 == 0:
                n1 = n1 * 10 + arr[i]
            else:
                n2 = n2 * 10 + arr[i]
        return n1 + n2


if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.solve(arr, n)
        print(ans)
        tc -= 1
