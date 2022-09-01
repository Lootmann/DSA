def main():
    n, row, col = map(int, input().split())
    ans = []

    for i in range(n):
        line = []

        for j in range(n):
            if i % 2 == 0:
                if j % 2 == 0:
                    line.append("." * col)
                else:
                    line.append("#" * col)
            else:
                if j % 2 == 0:
                    line.append("#" * col)
                else:
                    line.append("." * col)

        res = "".join(line)
        for _ in range(row):
            ans.append(res)

    for a in ans:
        print(a)


if __name__ == "__main__":
    main()
