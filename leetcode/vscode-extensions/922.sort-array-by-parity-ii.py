#
# @lc app=leetcode id=922 lang=python3
#
# [922] Sort Array By Parity II
#
from typing import List

# @lc code=start
class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        i, j = 0, 1
        length = len(nums)

        while j < length:
            if nums[j] % 2 == 0:
                nums[i], nums[j] = nums[j], nums[i]
                i += 2
            else:
                j += 2

        return nums


# @lc code=end
