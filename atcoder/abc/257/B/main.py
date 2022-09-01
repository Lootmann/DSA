def main():
    n, _, _ = map(int, input().split())

    pos_map = {}

    for idx, p in enumerate(map(int, input().split())):
        pos_map[idx + 1] = p

    for pos in map(int, input().split()):
        if pos_map[pos] == n:
            continue

        if pos_map[pos] < n:
            if pos + 1 not in pos_map:
                pos_map[pos] += 1
            else:
                if pos_map[pos] + 1 < pos_map[pos + 1]:
                    pos_map[pos] += 1

    print(*pos_map.values())


if __name__ == "__main__":
    main()
