def reverseWord(s):
    return s[::-1]


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        print(reverseWord(s))
