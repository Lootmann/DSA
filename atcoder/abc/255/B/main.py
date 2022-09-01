import math
import sys


def main():
    n, k = map(int, input().split())
    lights = list(map(lambda x: int(x) - 1, input().split()))
    points = [list(map(int, input().split())) for _ in range(n)]

    res = 0

    for idx in range(n):
        cur_min = sys.maxsize

        for light in lights:
            dist = (points[idx][0] - points[light][0]) ** 2
            dist += (points[idx][1] - points[light][1]) ** 2

            cur_min = min(cur_min, dist)

        res = max(res, cur_min)

    print("{:.6f}".format(math.sqrt(res)))


if __name__ == "__main__":
    main()
