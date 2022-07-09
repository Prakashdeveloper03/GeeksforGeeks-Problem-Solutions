class Solution:
    def isValid(self, s):
        string = s.split(".")
        if len(string) != 4:
            return 0
        for x in string:
            if len(x) > 1 and x[0] == "0":
                return 0
            try:
                if int(x) < 0 or int(x) > 255:
                    return 0
            except Exception:
                return 0
        return 1


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if Solution().isValid(s):
            print(1)
        else:
            print(0)
