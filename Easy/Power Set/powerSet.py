class Solution:
    def AllPossibleStrings(self, s):
        n = len(s)
        ans = []
        m = 1 << n
        ans.extend(
            "".join(s[i] for i in range(n) if num & 1 << i) for num in range(1, m)
        )
        return sorted(ans)


if __name__ == "__main__":
    T = int(input())
    for i in range(T):
        s = input()
        ob = Solution()
        ans = ob.AllPossibleStrings(s)
        for i in ans:
            print(i, end=" ")
        print()
