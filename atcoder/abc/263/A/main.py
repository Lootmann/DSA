def main():
    cards = [0] * 14

    for card in map(int, input().split()):
        cards[card] += 1

    two, three = False, False

    for num in cards:
        if num == 2:
            two = True
        if num == 3:
            three = True

    if two and three:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
