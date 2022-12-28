#
# @lc app=leetcode id=1051 lang=python3
#
# [1051] Height Checker
#
from typing import List

# @lc code=start
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        count = 0

        for a, b in zip(heights, sorted(heights)):
            if a != b:
                count += 1

        return count


# @lc code=end
