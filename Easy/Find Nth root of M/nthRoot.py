import math


class Solution:
    def NthRoot(self, n, m):
        ans = pow(m, 1 / n)
        ans_floor = math.floor(ans)
        ans_ceil = math.ceil(ans)
        if math.pow(ans_floor, n) == m:
            return ans_floor
        elif math.pow(ans_ceil, n) == m:
            return ans_ceil
        else:
            return -1


if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        n = int(input())
        m = int(input())
        ob = Solution()
        ans = ob.NthRoot(n, m)
        print(ans)
