import sys
from typing import List


class Point:
    def __init__(self, x1, y1, x2, y2) -> None:
        self.x1, self.y1, self.x2, self.y2 = int(x1), int(y1), int(x2), int(y2)

        if self.x1 > self.x2:
            self.x1, self.x2 = self.x2, self.x1
            self.y1, self.y2 = self.y2, self.y1

        elif self.x1 == self.x2:
            self.y1, self.y2 = min(self.y1, self.y2), max(self.y1, self.y2)

    def __str__(self) -> str:
        return f"(x1, y1, x2, y2) = ({self.x1}, {self.y1}, {self.x2}, {self.y2})"


def inputs() -> List[Point]:
    lines = list(map(str.rstrip, sys.stdin))
    points = []

    for line in lines:
        splitted = line.split("->")
        x1, y1 = splitted[0].strip().split(",")
        x2, y2 = splitted[1].strip().split(",")
        points.append(Point(x1, y1, x2, y2))

    return points


def main():
    points = inputs()

    x_lim, y_lim = 0, 0

    for p in points:
        x_lim = max(x_lim, max(p.x1, p.x2))
        y_lim = max(y_lim, max(p.x1, p.x2))

    field = [[0 for _ in range(x_lim + 1)] for _ in range(y_lim + 1)]

    for p in points:
        if p.x1 == p.x2:
            for y in range(p.y1, p.y2 + 1):
                field[y][p.x1] += 1

        elif p.y1 == p.y2:
            for x in range(p.x1, p.x2 + 1):
                field[p.y1][x] += 1

        else:
            xrange = range(p.x1, p.x2 + 1)
            if p.y1 < p.y2:
                yrange = range(p.y1, p.y2 + 1)
            else:
                yrange = range(p.y1, p.y2 - 1, -1)

            for x, y in zip(xrange, yrange):
                field[y][x] += 1

    ans = 0

    for line in field:
        for num in line:
            if num >= 2:
                ans += 1

    print(ans)


if __name__ == "__main__":
    main()
