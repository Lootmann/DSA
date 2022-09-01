def main():
    r, c = map(int, input().split())
    a = [[], []]
    a[0] = list(map(int, input().split()))
    a[1] = list(map(int, input().split()))

    print(a[r - 1][c - 1])


if __name__ == "__main__":
    main()
