#
# @lc app=leetcode id=1502 lang=python3
#
# [1502] Can Make Arithmetic Progression From Sequence
#
from typing import List

# @lc code=start
class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr.sort()
        is_ok = True
        diff = abs(arr[0] - arr[1])

        for i in range(len(arr) - 1):
            if abs(arr[i] - arr[i + 1]) != diff:
                is_ok = False

        return is_ok


# @lc code=end
