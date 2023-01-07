#
# @lc app=leetcode id=2144 lang=python3
#
# [2144] Minimum Cost of Buying Candies With Discount
#
from typing import List

# @lc code=start
class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        cost.sort(reverse=True)

        total = 0

        for i, candy in enumerate(cost, start=1):
            if i % 3 != 0:
                total += candy

        return total


# @lc code=end
