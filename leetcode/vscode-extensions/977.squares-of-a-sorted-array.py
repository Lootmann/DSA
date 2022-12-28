#
# @lc app=leetcode id=977 lang=python3
#
# [977] Squares of a Sorted Array
#
from typing import List

# @lc code=start
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        return sorted(map(lambda n: n * n, nums))


# @lc code=end
