def main():
    a, b = map(int, input().split())
    add, sub = a + b, a - b

    print(max(add, sub))
    print(min(add, sub))


if __name__ == "__main__":
    main()
