class Solution:
    def missingNumber(self, arr):
        arr.sort()
        s = 1
        for i in range(len(arr)):
            if s == arr[i]:
                s += 1
        return s


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(Solution().missingNumber(arr))
