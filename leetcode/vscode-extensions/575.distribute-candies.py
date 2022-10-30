#
# @lc app=leetcode id=575 lang=python3
#
# [575] Distribute Candies
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        n = len(candyType) // 2
        return min(n, len(set(candyType)))


# @lc code=end
