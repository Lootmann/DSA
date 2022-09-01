def main():
    _, W = map(int, input().split())
    weights = list(map(int, input().split()))

    ans = set()

    for w in weights:
        if w <= W:
            ans.add(w)

    for i in range(len(weights)):
        for j in range(i + 1, len(weights)):
            total = weights[i] + weights[j]
            if total <= W:
                ans.add(total)

    for i in range(len(weights)):
        for j in range(i + 1, len(weights)):
            for k in range(j + 1, len(weights)):
                total = weights[i] + weights[j] + weights[k]
                if total <= W:
                    ans.add(total)

    print(len(ans))


if __name__ == "__main__":
    main()
