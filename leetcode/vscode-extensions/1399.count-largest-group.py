#
# @lc app=leetcode id=1399 lang=python3
#
# [1399] Count Largest Group
#

"""
You are given an integer n.

Each number from 1 to n is grouped according to the sum of its digits.

Return the number of groups that have the largest size.
"""
from collections import defaultdict

# @lc code=start
class Solution:
    def digit_sum(self, num: int) -> int:
        total = 0
        while num > 0:
            div, mod = divmod(num, 10)
            total += mod
            num = div

        return total

    def countLargestGroup(self, n: int) -> int:
        d = defaultdict(int)

        max_count = 0

        for i in range(1, n + 1):
            idx = self.digit_sum(i)
            d[idx] += 1
            max_count = max(max_count, d[idx])

        ans = 0

        for value in d.values():
            if value == max_count:
                ans += 1

        return ans


# @lc code=end
