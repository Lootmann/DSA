import itertools


def main():
    s, k = input().split()
    s = sorted(s)
    k = int(k)

    dup = set()

    for c in itertools.permutations(s):
        conn = "".join(c)
        if conn in dup:
            continue

        dup.add(conn)
        k -= 1

        if k == 0:
            print(conn)
            return


if __name__ == "__main__":
    main()
