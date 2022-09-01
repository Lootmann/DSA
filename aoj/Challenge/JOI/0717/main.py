def main():
    _ = int(input())
    RED = int(input())
    s = input()
    red = s.count("R")

    if RED == red:
        print("W")
    else:
        print("R")


if __name__ == "__main__":
    main()
