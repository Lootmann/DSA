#
# @lc app=leetcode id=1217 lang=python3
#
# [1217] Minimum Cost to Move Chips to The Same Position
#
from typing import Counter, List
from collections import Counter

# @lc code=start
class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        odd, even = 0, 0

        for p in position:
            if p % 2 == 0:
                even += 1
            else:
                odd += 1

        return min(even, odd)


# @lc code=end
