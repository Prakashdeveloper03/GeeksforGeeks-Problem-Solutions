class Solution:
    def remove_duplicate(self, A, N):
        itr = 0
        while (len(A) - 1) > itr:
            if A[itr] == A[itr + 1]:
                A.pop(itr + 1)
            else:
                itr += 1
        return len(A)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = list(map(int, input().strip().split()))
        n = Solution().remove_duplicate(A, N)
        for i in range(n):
            print(A[i], end=" ")
        print()
