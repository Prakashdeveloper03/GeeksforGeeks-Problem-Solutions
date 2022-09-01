class Solution:
    def findSum(self, X, Y):
        return str(int(X) + int(Y))


if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        x = input()
        y = input()
        ob = Solution()
        answer = ob.findSum(x, y)
        print(answer)
