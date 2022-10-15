#
# @lc app=leetcode id=944 lang=python3
#
# [944] Delete Columns to Make Sorted
#
from typing import List

# @lc code=start
class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        row = len(strs)
        col = len(strs[0])
        columns = ["" for _ in range(col)]

        for c in range(col):
            for r in range(row):
                columns[c] += strs[r][c]

        count = 0
        for s in columns:
            if list(s) != sorted(s):
                count += 1

        return count


# @lc code=end
