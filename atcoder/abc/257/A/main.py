from string import ascii_uppercase


def main():
    n, x = map(int, input().split())

    print(ascii_uppercase[(x - 1) // n])


if __name__ == "__main__":
    main()
