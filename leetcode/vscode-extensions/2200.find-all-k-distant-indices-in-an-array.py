#
# @lc app=leetcode id=2200 lang=python3
#
# [2200] Find All K-Distant Indices in an Array
#
from typing import List

# @lc code=start
class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
        res = []

        size = len(nums)
        for i in range(size):
            for j in range(size):
                if abs(i - j) <= k and nums[j] == key:
                    res.append(i)
                    break

        return res


# @lc code=end
