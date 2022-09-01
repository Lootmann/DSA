def main():
    n, k = map(int, input().split())

    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    max_score = max(a)

    hates = [False] * n
    for idx, num in enumerate(a):
        if num == max_score:
            hates[idx] = True

    for idx in b:
        if hates[idx - 1]:
            print("Yes")
            return

    print("No")


if __name__ == "__main__":
    main()
