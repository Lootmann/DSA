#
# @lc app=leetcode id=1351 lang=python3
#
# [1351] Count Negative Numbers in a Sorted Matrix
#
from typing import List

# @lc code=start
class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        count = 0

        for row in grid:
            for cell in row:
                if cell < 0:
                    count += 1

        return count


# @lc code=end
