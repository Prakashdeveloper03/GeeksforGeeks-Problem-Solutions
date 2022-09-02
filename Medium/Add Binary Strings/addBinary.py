class Solution:
    def addBinary(self, A, B):
        return bin(int(A, base=2) + int(B, base=2))[2:]


if __name__ == "__main__":
    T = int(input())
    for _ in range(T):
        a, b = input().split(" ")
        ob = Solution()
        answer = ob.addBinary(a, b)
        print(answer)
