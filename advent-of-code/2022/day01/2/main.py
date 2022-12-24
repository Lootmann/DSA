def get_file(filename: str) -> list:
    with open(filename, "r") as f:
        return f.readlines()


def solve(filename: str):
    lines = get_file(filename)

    current = 0
    calories = []

    for line in lines:
        calory = line.strip()

        if calory == "":
            calories.append(current)
            current = 0
        else:
            current += int(calory)
    else:
        calories.append(current)

    calories.sort(reverse=True)
    print(sum(calories[:3]))


def main():
    filenames = ["./in1", "./in2"]
    for filename in filenames:
        print(">>> solve")
        solve(filename)
        print()


if __name__ == "__main__":
    main()
