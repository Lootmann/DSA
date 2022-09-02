#
# @lc app=leetcode id=1480 lang=python3
#
# [1480] Running Sum of 1d Array
#
from typing import List

# @lc code=start
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        accum = [0] * len(nums)
        accum[0] = nums[0]

        for i in range(1, len(nums)):
            accum[i] = accum[i - 1] + nums[i]

        return accum


# @lc code=end
