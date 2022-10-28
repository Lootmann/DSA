#
# @lc app=leetcode id=883 lang=python3
#
# [883] Projection Area of 3D Shapes
#
from typing import List


# @lc code=start
class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:
        horizontal = sum(map(max, grid))
        vertical = sum(map(max, zip(*grid)))
        top = sum(v > 0 for row in grid for v in row)

        return horizontal + vertical + top


# @lc code=end
