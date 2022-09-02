#
# @lc app=leetcode id=1313 lang=python3
#
# [1313] Decompress Run-Length Encoded List
#
from typing import List

# @lc code=start
class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        res = []

        for i in range(0, len(nums), 2):
            res += [nums[i + 1]] * nums[i]

        return res


# @lc code=end
