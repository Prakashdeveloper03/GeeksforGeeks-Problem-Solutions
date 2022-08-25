class Solution:
    def multiplyStrings(self, s1, s2):
        return int(s1) * int(s2)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a, b = input().split()
        print(Solution().multiplyStrings(a.strip(), b.strip()))
