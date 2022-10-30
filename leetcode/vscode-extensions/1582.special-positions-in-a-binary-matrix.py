#
# @lc app=leetcode id=1582 lang=python3
#
# [1582] Special Positions in a Binary Matrix
#
from typing import List

# @lc code=start
class Solution:
    def is_special(self, mat: List[List[int]], y: int, x: int) -> bool:
        height, width = len(mat), len(mat[0])

        # vertical
        # top
        for col in range(y - 1, -1, -1):
            if mat[col][x] == 1:
                return False

        # bottom
        for col in range(y + 1, height):
            if mat[col][x] == 1:
                return False

        # horizonal
        # left
        for row in range(x - 1, -1, -1):
            if mat[y][row] == 1:
                return False

        # right
        for row in range(x + 1, width):
            if mat[y][row] == 1:
                return False

        return True

    def numSpecial(self, mat: List[List[int]]) -> int:
        ans = 0

        for y in range(len(mat)):
            for x in range(len(mat[0])):
                if mat[y][x] == 1 and self.is_special(mat, y, x):
                    ans += 1

        return ans


# @lc code=end
