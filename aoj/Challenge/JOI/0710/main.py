def main():
    _, _ = map(int, input().split())
    boxes = list(map(int, input().split()))
    keys = set(map(int, input().split()))

    cnt = 0

    for key in keys:
        cnt += boxes.count(key)

    print(cnt)


if __name__ == "__main__":
    main()
