#
# @lc app=leetcode id=1464 lang=python3
#
# [1464] Maximum Product of Two Elements in an Array
#
from typing import List

# @lc code=start
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        maxv = 0
        size = len(nums)

        for i in range(size):
            for j in range(i + 1, size):
                maxv = max((nums[i - 1] - 1) * (nums[j - 1] - 1), maxv)

        return maxv


# @lc code=end
