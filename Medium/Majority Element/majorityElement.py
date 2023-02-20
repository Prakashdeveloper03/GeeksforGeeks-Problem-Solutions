class Solution:
    def majorityElement(self, A, N):
        my_hash = {}
        for x in A:
            my_hash[x] = my_hash.get(x, 0) + 1
        return next((y for y, value in my_hash.items() if value > int(N / 2)), -1)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(Solution().majorityElement(arr, n))
