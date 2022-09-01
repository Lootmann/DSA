def read_int():
    return int(input())


def read_str():
    return input()


def main():
    _ = read_int()
    s = read_str()

    for idx, ch in enumerate(s):
        if idx > 0 and ch == 'J':
            print(s[idx - 1])


if __name__ == "__main__":
    main()
