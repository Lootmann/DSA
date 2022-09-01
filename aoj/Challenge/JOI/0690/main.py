def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    cnt = 0

    for ai in a:
        for bi in b:
            if ai <= bi:
                cnt += 1

    print(cnt)


if __name__ == "__main__":
    main()
