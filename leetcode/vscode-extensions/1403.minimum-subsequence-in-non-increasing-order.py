#
# @lc app=leetcode id=1403 lang=python3
#
# [1403] Minimum Subsequence in Non-Increasing Order
#
from typing import List

# @lc code=start
class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort()
        res = []

        while sum(res) <= sum(nums):
            res.append(nums.pop())

        return res


# @lc code=end
