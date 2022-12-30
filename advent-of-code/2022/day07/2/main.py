def get_file(filename: str) -> list:
    with open(filename, "r") as f:
        return f.readlines()


def extract(lines: list) -> list:
    data = []
    for line in lines:
        stripped = line.strip()
        data.append(str_to_int(stripped))

    data.sort()

    return data


def str_to_int(s: str) -> int:
    score = ""
    for ch in s:
        if ch.isdigit():
            score += ch
    return int(score)


def main():
    filename = "memo.txt"
    lines = get_file(filename)
    data = extract(lines)

    total = 7000_0000
    free_space = total - data[-1]
    require_space = 30000000
    print(f"total = {total}")
    print(f"root / space = {data[-1]}")
    print(f"free space = {free_space}")
    print(f"need space = {require_space - free_space}")

    need_space = require_space - free_space

    ans = 1000000000
    for num in data:
        if need_space <= num:
            ans = num
            break

    print(ans)


if __name__ == "__main__":
    main()
