#
# @lc app=leetcode id=1827 lang=python3
#
# [1827] Minimum Operations to Make the Array Increasing
#
from typing import List

# @lc code=start
class Solution:
    def minOperations(self, nums: List[int]) -> int:
        if len(nums) <= 1:
            return 0

        ans = 0

        for i in range(len(nums) - 1):
            if nums[i] >= nums[i + 1]:
                diff = nums[i] - nums[i + 1] + 1
                ans += diff
                nums[i + 1] += diff

        return ans


# @lc code=end
