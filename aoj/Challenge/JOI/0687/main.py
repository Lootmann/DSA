def ignore():
    _ = input()


def main():
    ignore()
    a = list(map(int, input().split()))

    maxv = max(a)
    idx = a.index(maxv)

    if idx == 0:
        print(0)
        print(sum(a[1:]))
    elif idx == len(a):
        print(sum(a[:-1]))
        print(0)
    else:
        print(sum(a[:idx]))
        print(sum(a[idx + 1:]))


if __name__ == "__main__":
    main()
