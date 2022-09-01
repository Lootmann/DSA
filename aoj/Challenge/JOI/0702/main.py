def main():
    _, k = map(lambda x: int(x) - 1, input().split())
    t = input()

    ans = []
    for idx, ch in enumerate(t):
        if k <= idx:
            if ch.isupper():
                ans.append(ch.lower())
            else:
                ans.append(ch.upper())
        else:
            ans.append(ch)

    print("".join(ans))


if __name__ == "__main__":
    main()
