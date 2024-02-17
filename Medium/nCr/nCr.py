from math import factorial


class Solution:
    def nCr(self, n, r):
        if r > n:
            return 0
        x = factorial(n)
        y = factorial(r)
        z = factorial(n - r)
        return (x // (y * z)) % 1000000007


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        r = int(input())
        print(Solution().nCr(n, r))
