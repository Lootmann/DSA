#
# @lc app=leetcode id=2303 lang=python3
#
# [2303] Calculate Amount Paid in Taxes
#
from typing import List

# @lc code=start
class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        n = min(income, len(brackets))

        if n == 0:
            return 0.0

        ans = 0.0

        for i in range(n):
            if i == 0:
                prev = 0
            else:
                prev = brackets[i - 1][0]

            current = min(income, brackets[i][0])
            ans += max(0.0, (current - prev) * brackets[i][1] / 100)

        return ans


# @lc code=end
