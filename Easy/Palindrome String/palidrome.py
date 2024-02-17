class Solution:
    def isPalindrome(self, S):
        return 1 if S == S[::-1] else 0


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        S = input()
        print(Solution().isPalindrome(S))
