#
# @lc app=leetcode id=1030 lang=python3
#
# [1030] Matrix Cells in Distance Order
#
from typing import List

# @lc code=start
class Solution:
    def allCellsDistOrder(self, rows: int, cols: int, rCenter: int, cCenter: int) -> List[List[int]]:
        res = [[x, y] for y in range(cols) for x in range(rows)]
        res.sort(key=lambda p: abs(p[0] - rCenter) + abs(p[1] - cCenter))
        return res


# @lc code=end
