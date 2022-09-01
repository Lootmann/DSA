def main():
    a, b, c = map(lambda x: x.title()[0], input().split())
    print(f"{a}{b}{c}")


if __name__ == "__main__":
    main()
