def main():
    s = int(input())
    a = int(input())
    b = int(input())

    ans = 250

    if s <= a:
        print(ans)
        return

    res = s - a
    ans += (res + b - 1) // b * 100
    print(ans)


if __name__ == "__main__":
    main()
