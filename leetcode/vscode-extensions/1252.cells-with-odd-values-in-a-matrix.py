#
# @lc app=leetcode id=1252 lang=python3
#
# [1252] Cells with Odd Values in a Matrix
#
from typing import List

# @lc code=start
class Solution:
    def oddCells(self, m: int, n: int, indices: List[List[int]]) -> int:
        row = [0] * m
        col = [0] * n

        for x, y in indices:
            row[x] += 1
            col[y] += 1

        ans = 0

        for i in range(m):
            for j in range(n):
                if (row[i] + col[j]) % 2:
                    ans += 1

        return ans


# @lc code=end
