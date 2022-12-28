#
# @lc app=leetcode id=2319 lang=python3
#
# [2319] Check if Matrix Is X-Matrix
#
from typing import List

# @lc code=start
class Solution:
    def checkXMatrix(self, grid: List[List[int]]) -> bool:
        diagonal = set()
        size = len(grid)

        for (y, x) in zip(range(size), range(size)):
            diagonal.add((y, x))

        for (y, x) in zip(range(size - 1, -1, -1), range(size)):
            diagonal.add((y, x))

        for y in range(size):
            for x in range(size):
                if (y, x) in diagonal:
                    if grid[y][x] == 0:
                        return False
                else:
                    if grid[y][x] != 0:
                        return False

        return True


# @lc code=end
