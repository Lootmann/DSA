#
# @lc app=leetcode id=1619 lang=python3
#
# [1619] Mean of Array After Removing Some Elements
#
from typing import List

# @lc code=start
class Solution:
    def trimMean(self, arr: List[int]) -> float:
        arr.sort()
        n = int(len(arr) * 0.05)
        rest = arr[n : len(arr) - n]

        return sum(rest) / len(rest)


# @lc code=end
