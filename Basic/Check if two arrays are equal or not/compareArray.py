class Solution:
    def check(self, A, B, N):
        return sorted(A) == sorted(B)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = list(map(int, input().strip().split()))
        B = list(map(int, input().strip().split()))
        if Solution().check(A, B, N):
            print(1)
        else:
            print(0)
