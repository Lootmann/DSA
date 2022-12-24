class Fish:
    def __init__(self, inner_timer: int = 6, defaul_time: int = 6) -> None:
        self._default = defaul_time
        self.inner_timer = inner_timer

    def decrement(self) -> None:
        self.inner_timer -= 1

    def is_dead(self) -> bool:
        return self.inner_timer < 0

    def reset(self) -> None:
        self.inner_timer = 6

    @staticmethod
    def create_fish() -> "Fish":
        return Fish(inner_timer=8, defaul_time=8)

    def __str__(self) -> str:
        return f"{self.inner_timer}"


def debug(day: int, fs: list):
    print("{:2d} : ".format(day), end="")
    print(",".join(str(f) for f in fs))


def main():
    left_days = int(input())
    initial = list(map(int, input().split(",")))
    fishes = [Fish(num) for num in initial]

    # debug(0, fishes)

    for _ in range(left_days):
        for i in range(len(fishes)):
            if not fishes[i].is_dead():
                fishes[i].decrement()

        for i in range(len(fishes)):
            if fishes[i].is_dead():
                fishes[i].reset()
                fishes.append(Fish.create_fish())

        # debug(day + 1, fishes)

    print(len(fishes))


if __name__ == "__main__":
    main()
