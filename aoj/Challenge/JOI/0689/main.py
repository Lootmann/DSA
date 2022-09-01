def main():
    _ = input()
    s = input()

    cnt = 0
    for idx, ch in enumerate(s):
        if idx % 2 == 0:
            if "I" != ch:
                cnt += 1
        else:
            if "O" != ch:
                cnt += 1

    print(cnt)


if __name__ == "__main__":
    main()
