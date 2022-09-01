def main():
    n = int(input())

    p = [0, 0]
    for num in map(int, input().split()):
        p.append(num)

    cnt = 0
    cur = n

    while cur != 1:
        cur = p[cur]
        cnt += 1

    print(cnt)


if __name__ == "__main__":
    main()
