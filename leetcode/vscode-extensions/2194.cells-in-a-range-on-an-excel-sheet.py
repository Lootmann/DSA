#
# @lc app=leetcode id=2194 lang=python3
#
# [2194] Cells in a Range on an Excel Sheet
#
from typing import List

# @lc code=start
class Solution:
    def cellsInRange(self, s: str) -> List[str]:
        cell1, cell2 = s.split(":")

        col1, col2 = ord(cell1[0]) - ord("A"), ord(cell2[0]) - ord("A")
        row1, row2 = int(cell1[1]), int(cell2[1])

        res = []
        for col in range(col1, col2 + 1):
            for row in range(row1, row2 + 1):
                res.append(chr(col + ord("A")) + str(row))

        return res


# @lc code=end
