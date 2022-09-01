def debug(cells, left: int, right: int, move: int, msg: str = ""):
    if len(cells) <= right:
        print(f"r (l, r) = ({left}, {right}) ({move}) {msg}")
    elif left < 0:
        print(f"l (l, r) = ({left}, {right}) ({move}) {msg}")
    else:
        print(f"* (l, r) = ({left}, {right}) ({move}) {msg}")


def main():
    n, a = map(int, input().split())
    cells = list(input())

    is_forward = True
    left, right = a - 1, a - 1
    move, tmp = 0, 0
    ans = 0

    # O(len(cells))
    while left != -1 or right != n:

        # right
        if is_forward:
            if right < n:
                right += 1
                move += 1

            while right < n and cells[right] != "#":
                right += 1
                move += 1

            if right < n and cells[right] == "#":
                ans += move + tmp

            # right end
            if right == n:
                tmp = move

        # left
        else:
            if 0 <= left:
                left, move = left - 1, move + 1

            while 0 <= left and cells[left] != "#":
                left, move = left - 1, move + 1

            if 0 <= left and cells[left] == "#":
                ans += move + tmp

            # left end
            if left == -1:
                tmp = move

        is_forward = not is_forward

    print(ans)


if __name__ == "__main__":
    main()
