#
# @lc app=leetcode id=2057 lang=python3
#
# [2057] Smallest Index With Equal Value
#
from typing import List

# @lc code=start
class Solution:
    def smallestEqual(self, nums: List[int]) -> int:
        for i, _ in enumerate(nums):
            if i % 10 == nums[i]:
                return i

        return -1


# @lc code=end
