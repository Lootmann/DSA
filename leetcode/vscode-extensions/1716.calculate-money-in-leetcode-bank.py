#
# @lc app=leetcode id=1716 lang=python3
#
# [1716] Calculate Money in Leetcode Bank
#


# @lc code=start
class Solution:
    def totalMoney(self, n: int) -> int:
        def total(first: int, size: int) -> int:
            return (first + size + first - 1) * size // 2

        r = range(0, n)
        ranges = [r[7 * i : 7 * i + 7] for i in range((len(r) + 7 - 1) // 7)]

        max_total = 0

        for idx, row in enumerate(ranges):
            max_total += total(idx + 1, len(row))

        return max_total


# @lc code=end
