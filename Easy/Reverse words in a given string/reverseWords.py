class Solution:
    def reverseWords(self, S):
        return ".".join(S.split(".")[-1::-1])


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        S = input()
        print(Solution().reverseWords(S))
