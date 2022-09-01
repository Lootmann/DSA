def main():
    a, b, c = map(int, input().split())
    maxv = max(a, b, c)
    print(maxv * 3 - a - b - c)


if __name__ == "__main__":
    main()
