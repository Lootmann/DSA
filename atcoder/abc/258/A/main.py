def hour_to_min(hour: int) -> int:
    return hour * 60


def min_to_time(min: int) -> str:
    hour = min // 60
    min %= 60
    return "{:02d}:{:02d}".format(hour, min)


def main():
    k = int(input())
    current = hour_to_min(21) + k

    print(min_to_time(current))


if __name__ == "__main__":
    main()
