#
# @lc app=leetcode id=2373 lang=python3
#
# [2373] Largest Local Values in a Matrix
#
from typing import List

# @lc code=start
class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        res = []

        height = len(grid)
        width = len(grid[0])

        for h in range(height - 2):
            line = []

            for w in range(width - 2):
                current_max = 0

                for i in range(3):
                    current_max = max(current_max, *grid[h + i][w : w + 3])

                line.append(current_max)

            res.append(line)

        return res


# @lc code=end
