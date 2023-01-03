def is_perfect(me: str, other: str) -> bool:
    length = len(me)
    cnt = 0
    for i in range(length):
        if "o" in (me[i], other[i]):
            cnt += 1
    return length == cnt


def main():
    n, _ = map(int, input().split())
    scores = [input() for _ in range(n)]
    ans = 0

    for i in range(n):
        for j in range(i + 1, n):
            if is_perfect(scores[i], scores[j]):
                ans += 1

    print(ans)


if __name__ == "__main__":
    main()
