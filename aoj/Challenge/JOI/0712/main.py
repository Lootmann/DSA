def main():
    a = int(input())
    b = int(input())

    mod = (a + b) % 12
    if mod == 0:
        print(12)
    else:
        print(mod)


if __name__ == "__main__":
    main()
