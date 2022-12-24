def cost_fuel(idx: int, fuels: list) -> int:
    cost = 0
    current_fuel = fuels[idx]

    for fuel in fuels:
        cost += abs(current_fuel - fuel)

    return cost


def main():
    fuels = list(map(int, input().split(",")))
    cost = 10**9

    for i in range(len(fuels)):
        cost = min(cost, cost_fuel(i, fuels))

    print(cost)


if __name__ == "__main__":
    main()
