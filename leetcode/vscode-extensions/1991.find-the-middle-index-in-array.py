#
# @lc app=leetcode id=1991 lang=python3
#
# [1991] Find the Middle Index in Array
#
from typing import List

# @lc code=start
class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        left, right = 0, 0

        for i in range(len(nums)):
            right = total - left
            left += nums[i]

            if right == left:
                return i

        return -1


# @lc code=end
