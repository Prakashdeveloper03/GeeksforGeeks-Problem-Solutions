class Solution:
    def displayContacts(self, n, contact, s):
        def check(ind, letter, word):
            return ind < len(word) and word[ind] == letter

        contact = sorted(set(contact))
        res = []
        temp = []
        for ind, letter in enumerate(s):
            temp = []
            for word in contact:
                if check(ind, letter, word):
                    temp.append(word)
            if not temp:
                res.append([0])
            else:
                res.append(temp)
            contact[:] = temp
        return res


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        contact = input().split()
        s = input()
        ob = Solution()
        ans = ob.displayContacts(n, contact, s)
        for i in range(len(s)):
            for val in ans[i]:
                print(val, end=" ")
            print()
