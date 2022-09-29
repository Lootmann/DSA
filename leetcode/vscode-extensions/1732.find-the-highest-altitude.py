#
# @lc app=leetcode id=1732 lang=python3
#
# [1732] Find the Highest Altitude
#
from typing import List

# @lc code=start
class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        highest = 0
        current = 0
        for g in gain:
            current += g
            highest = max(highest, current)

        return highest


# @lc code=end
