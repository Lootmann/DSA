#
# @lc app=leetcode id=806 lang=python3
#
# [806] Number of Lines To Write String
#
from typing import List

# @lc code=start
class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
        newline, width = 1, 0

        for ch in s:
            char_width = widths[ord(ch) - ord("a")]

            if char_width + width > 100:
                newline += 1
                width = 0

            width += char_width

        return [newline, width]


# @lc code=end
