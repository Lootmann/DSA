def main():
    n, m = map(int, input().split())
    balls = [i + 1 for i in range(n)]

    for _ in range(m):
        x, y = map(lambda ball: int(ball) - 1, input().split())
        balls[x] = y + 1

    for idx in balls:
        print(idx)


if __name__ == "__main__":
    main()
