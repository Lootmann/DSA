#
# @lc app=leetcode id=2089 lang=python3
#
# [2089] Find Target Indices After Sorting Array
#
from typing import List

# @lc code=start
class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        res = []
        nums.sort()

        for i in range(len(nums)):
            if nums[i] == target:
                res.append(i)

        return res


# @lc code=end
