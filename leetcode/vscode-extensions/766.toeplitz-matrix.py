#
# @lc app=leetcode id=766 lang=python3
#
# [766] Toeplitz Matrix
#
from typing import List

"""
[
    [1,2,3,4],
    [5,1,2,3],
    [9,5,1,2]
]
"""

# @lc code=start
class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        row_max, col_max = len(matrix), len(matrix[0])

        pos = []

        for i in range(row_max - 1):
            pos.append([row_max - i - 1, 0])

        for i in range(col_max):
            pos.append([0, i])

        is_toeplitz = True

        for p in pos:
            row, col = p
            num = matrix[row][col]

            for i in range(min(row_max, col_max)):
                if 0 <= row + i < row_max and 0 <= col + i < col_max:
                    is_toeplitz &= num == matrix[row + i][col + i]
                else:
                    break

        return is_toeplitz


# @lc code=end
