def main():
    _, _ = map(int, input().split())
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))

    ans = a & b

    if len(ans) == 0:
        print(end="")
    else:
        for num in sorted(list(ans)):
            print(num)


if __name__ == "__main__":
    main()
