def main():
    _ = input()
    s = input()

    j = s.count('J')
    o = s.count('O')
    i = s.count('I')

    print("J" * j + "O" * o + "I" * i)


if __name__ == "__main__":
    main()
