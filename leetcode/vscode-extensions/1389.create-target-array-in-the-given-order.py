#
# @lc app=leetcode id=1389 lang=python3
#
# [1389] Create Target Array in the Given Order
#
from typing import List

# @lc code=start
class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        res = []

        for num, idx in zip(nums, index):
            res.insert(idx, num)

        return res


# @lc code=end
