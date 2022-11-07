#
# @lc app=leetcode id=1800 lang=python3
#
# [1800] Maximum Ascending Subarray Sum
#
from typing import List

# @lc code=start
class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        max_sum = nums[0]
        current_sum = nums[0]

        for i in range(1, len(nums)):
            if nums[i - 1] < nums[i]:
                current_sum += nums[i]
            else:
                current_sum = nums[i]

            max_sum = max(max_sum, current_sum)

        return max_sum


# @lc code=end
