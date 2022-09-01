def main():
    nums = list(map(int, input().split()))
    print(sum(nums) - max(nums) - min(nums))


if __name__ == "__main__":
    main()
