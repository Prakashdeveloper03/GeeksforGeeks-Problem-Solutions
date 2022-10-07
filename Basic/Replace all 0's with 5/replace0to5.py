def convertFive(n):
    letters = list(str(n))
    for i in range(len(letters)):
        if letters[i] == "0":
            letters[i] = "5"
    return int("".join(letters))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(convertFive(n))
