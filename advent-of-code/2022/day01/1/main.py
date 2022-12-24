def get_file(filename: str) -> list:
    with open(filename, "r") as f:
        return f.readlines()


def solve(filename: str) -> None:
    lines = get_file(filename)

    calories = []
    current = 0
    for line in lines:
        calory = line.strip()

        if calory == "":
            calories.append(current)
            current = 0
        else:
            current += int(calory)

    print("ans =", max(calories))


def main():
    filenames = ["./in1", "./in2"]

    for filename in filenames:
        print(">>> solve: ", filename)
        solve(filename)
        print()


if __name__ == "__main__":
    main()
