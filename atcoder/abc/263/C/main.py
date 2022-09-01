from itertools import combinations


def main():
    n, m = map(int, input().split())

    for c in combinations(range(1, m + 1), n):
        print(" ".join(map(str, c)))


if __name__ == "__main__":
    main()
