def main():
    h, w = map(int, input().split())
    r, c = map(int, input().split())

    dy = [0, 1, -1, 0]
    dx = [-1, 0, 0, 1]

    ans = 0
    for (y, x) in zip(dy, dx):
        if 1 <= r + y <= h and 1 <= c + x <= w:
            ans += 1

    print(ans)


if __name__ == "__main__":
    main()
