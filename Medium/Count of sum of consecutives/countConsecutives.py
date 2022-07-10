import math


class Solution:
    def getCount(self, N):
        counter = 0
        maxNum = math.ceil((math.sqrt(8 * N + 1) - 1) / 2)
        for num in range(2, maxNum + 1):
            res = N / num - (num - 1) / 2
            if res == round(res):
                counter += 1
        return counter


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(Solution().getCount(n))
