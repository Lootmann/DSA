# perfect TLE
import sys

input = sys.stdin.readline


def calc_mods(m: int, r: int):
    for i in range(1, 100000000 + 1):
        if i % m == r:
            yield i


""" (y, x) pos

  | 0 1 2
--+------
0 | 7 8 9
1 | 4 5 6
2 | 1 2 3
3 | 0
"""
keyboard = {
    "7": (0, 0),
    "8": (0, 1),
    "9": (0, 2),
    "4": (1, 0),
    "5": (1, 1),
    "6": (1, 2),
    "1": (2, 0),
    "2": (2, 1),
    "3": (2, 2),
    "0": (3, 0),
}


def manhattan(before: str, after: str) -> int:
    """
    move and push
    """
    y1, x1 = keyboard[before]
    y2, x2 = keyboard[after]
    return abs(y1 - y2) + abs(x1 - x2) + 1


def main():
    m, r = map(int, input().split())

    dist = 6 * 100000

    for mod in calc_mods(m, r):
        prev, nxt = "0", "0"

        current = 0
        line = str(mod)

        for ch in line:
            nxt = ch
            current += manhattan(prev, nxt)
            prev = nxt

        dist = min(dist, current)

        if dist == 3:
            break

    print(dist)


if __name__ == "__main__":
    main()
