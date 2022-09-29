#
# @lc app=leetcode id=1725 lang=python3
#
# [1725] Number Of Rectangles That Can Form The Largest Square
#
from typing import List

# @lc code=start
class Solution:
    def countGoodRectangles(self, rectangles: List[List[int]]) -> int:
        arr = []

        for rec in rectangles:
            arr.append(min(rec))

        maxv = max(arr)

        total = 0
        for num in arr:
            if num == maxv:
                total += 1

        return total


# @lc code=end
