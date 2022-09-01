def main():
    _ = int(input())
    A = list(map(int, input().split()))

    cells = [False] * 4
    ans = 0

    for a_i in A:
        # 1
        cells[0] = True

        # 2
        for i in range(len(cells) - 1, -1, -1):
            move = i + a_i

            if cells[i] and move >= 4:
                cells[i] = False
                ans += 1
            elif cells[i]:
                cells[i] = False
                cells[move] = True

    print(ans)


if __name__ == "__main__":
    main()
