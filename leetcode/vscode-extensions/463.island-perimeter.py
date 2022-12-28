#
# @lc app=leetcode id=463 lang=python3
#
# [463] Island Perimeter
#
from typing import List

# @lc code=start
class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        dy, dx = [0, -1, 1, 0], [-1, 0, 0, 1]
        row_max, col_max = len(grid), len(grid[0])

        count = 0
        for r in range(row_max):
            for c in range(col_max):
                if grid[r][c] == 1:
                    for i in range(4):
                        row, col = r + dy[i], c + dx[i]

                        if 0 <= row < row_max and 0 <= col < col_max:
                            if grid[row][col] == 0:
                                count += 1

                        else:  # outbound
                            count += 1

        return count


# @lc code=end
