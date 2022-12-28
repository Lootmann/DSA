def get_file(filename: str) -> list:
    with open(filename, "r") as f:
        return f.readlines()


def compress(line: list) -> list:
    compressed = []
    empty = 0

    for ch in line:
        if ch == "":
            empty += 1
        else:
            for _ in range(empty // 4):
                compressed.append("")
            compressed.append(ch)
            empty = 0
    return compressed


def get_sections(lines: list) -> tuple[list, list]:
    idx = lines.index("\n")

    # get stack
    stacks = []
    max_size = 0
    for line in lines[: idx - 1]:
        stripped = line.strip("\n").split(" ")
        tmp = compress(stripped)
        max_size = max(max_size, len(tmp))
        stacks.append(tmp)

    result = [[] for _ in range(max_size)]
    for st in stacks:
        for i in range(len(st)):
            if st[i] != "":
                result[i].append(st[i][1])

    # reversed for stack operations
    for i in range(len(result)):
        result[i].reverse()

    # get operations
    operations = [line.strip() for line in lines[idx + 1 :]]

    return result, operations


def solve(filename: str) -> None:
    lines = get_file(filename)
    stacks, operations = get_sections(lines)

    print(">>> solve")
    for st in stacks:
        print(st)

    for op in operations:
        line = op.split(" ")
        num, from_, to_ = int(line[1]), int(line[3]) - 1, int(line[5]) - 1

        current = []
        for _ in range(num):
            current.append(stacks[from_].pop())

        current.reverse()
        for num in current:
            stacks[to_].append(num)

    # ans
    for st in stacks:
        print(st.pop(), end="")
    print()


def main():
    filenames = ["./in1", "./in2"]

    for filename in filenames:
        print(">>> ", filename)
        solve(filename)
        print()


if __name__ == "__main__":
    main()
