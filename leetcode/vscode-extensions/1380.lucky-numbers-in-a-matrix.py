#
# @lc app=leetcode id=1380 lang=python3
#
# [1380] Lucky Numbers in a Matrix
#
from typing import List

# @lc code=start
class Solution:
    def luckyNumbers(self, matrix: List[List[int]]) -> List[int]:
        # [num, row, col]
        row_mins, col_maxs = set(), set()

        for row in matrix:
            row_mins.add(min(row))

        for x in range(len(matrix[0])):
            col_max = 0
            for y in range(len(matrix)):
                col_max = max(col_max, matrix[y][x])
            col_maxs.add(col_max)

        return list(row_mins & col_maxs)


# @lc code=end
