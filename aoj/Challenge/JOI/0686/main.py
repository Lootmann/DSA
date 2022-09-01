def main():
    _ = input()
    s = input()

    left_i = s.find("I")
    right_i = s.rfind("I")

    if left_i == -1 or right_i == -1:
        print("No")
    elif "O" in s[left_i + 1: right_i]:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
