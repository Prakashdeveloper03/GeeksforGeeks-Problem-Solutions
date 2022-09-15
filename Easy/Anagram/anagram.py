from collections import Counter


class Solution:
    def isAnagram(self, a, b):
        return Counter(a) == Counter(b)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a, b = input().strip().split()
        if Solution().isAnagram(a, b):
            print("YES")
        else:
            print("NO")
