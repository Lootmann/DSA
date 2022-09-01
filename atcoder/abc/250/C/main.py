def swap(lst, left, right):
    lst[left], lst[right] = lst[right], lst[left]


def main():
    n, q = map(int, input().split())

    balls = [i + 1 for i in range(n)]
    pos = [i for i in range(n)]

    for _ in range(q):
        x_i = int(input()) - 1
        p0, p1 = pos[x_i], pos[x_i]

        # the most right
        if p0 == n - 1:
            p1 -= 1
        else:
            p1 += 1

        b0, b1 = balls[p0] - 1, balls[p1] - 1

        swap(balls, p0, p1)
        swap(pos, b0, b1)

    print(" ".join([str(ball) for ball in balls]))


if __name__ == "__main__":
    main()
