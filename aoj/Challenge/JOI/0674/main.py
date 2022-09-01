def sum_digit(n: int) -> int:
    tmp, total = n, 0

    while n > 0:
        div, mod = divmod(n, 10)
        total += mod
        n = div

    return total + tmp


def main():
    n = int(input())
    s = {n}

    for i in range(n, 0, -1):
        if sum_digit(i) in s:
            s.add(i)

    print(len(s))


if __name__ == "__main__":
    main()
