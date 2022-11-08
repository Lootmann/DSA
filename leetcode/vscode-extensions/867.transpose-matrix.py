#
# @lc app=leetcode id=867 lang=python3
#
# [867] Transpose Matrix
#
from typing import List

# @lc code=start
class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        row, column = len(matrix), len(matrix[0])

        convert = [[0 for _ in range(row)] for _ in range(column)]

        for r in range(row):
            for c in range(column):
                convert[c][r] = matrix[r][c]

        return convert


# @lc code=end
