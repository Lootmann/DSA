#
# @lc app=leetcode id=908 lang=python3
#
# [908] Smallest Range I
#
from typing import List

# @lc code=start
class Solution:
    def smallestRangeI(self, nums: List[int], k: int) -> int:
        maxv = max(nums)
        minv = min(nums)
        return max(0, maxv - minv - 2 * k)


# @lc code=end
