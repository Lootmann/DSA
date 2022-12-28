#
# @lc app=leetcode id=1413 lang=python3
#
# [1413] Minimum Value to Get Positive Step by Step Sum
#
from typing import List


# @lc code=start
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        total = 0
        minv = 100 * 100 + 1

        for num in nums:
            total += num
            minv = min(minv, total)

        if minv > 0:
            return 1

        return abs(minv) + 1


# @lc code=end
