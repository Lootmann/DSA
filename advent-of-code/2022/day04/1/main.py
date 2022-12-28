def get_file(filename: str) -> list:
    with open(filename, "r") as f:
        return f.readlines()


def split_range(section_id: str) -> tuple:
    splitted = section_id.split("-")
    return int(splitted[0]), int(splitted[-1])


def is_contained(left: str, right: str) -> bool:
    left_low, left_upper = split_range(left)
    right_low, right_upper = split_range(right)

    if left_low <= right_low and right_upper <= left_upper:
        return True

    if right_low <= left_low and left_upper <= right_upper:
        return True

    return False


def solve(filename):
    lines = get_file(filename)

    cnt = 0

    for line in lines:
        left, right = line.strip().split(",")

        if is_contained(left, right):
            cnt += 1

    print(cnt)


def main():
    filenames = ["./in1", "./in2"]

    for filename in filenames:
        print(">>> ", filename)
        solve(filename)


if __name__ == "__main__":
    main()
