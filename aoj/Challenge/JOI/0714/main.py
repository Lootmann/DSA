from collections import Counter


def ignore():
    _ = input()


def main():
    ignore()
    counter = Counter(map(int, input().split()))

    freq = min(counter.values())

    min_val = 2001
    for k, cnt in counter.items():
        if cnt == freq:
            min_val = min(min_val, k)

    print(min_val)


if __name__ == "__main__":
    main()
