class Solution:
    def isSquare(self, x1, y1, x2, y2, x3, y3, x4, y4):
        return "Yes" if len({x1, y1, x2, y2, x3, y3, x4, y4}) == 2 else "No"


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        x1, y1, x2, y2, x3, y3, x4, y4 = map(int, input().split())
        print(Solution().isSquare(x1, y1, x2, y2, x3, y3, x4, y4))
