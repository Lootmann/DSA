#
# @lc app=leetcode id=2248 lang=python3
#
# [2248] Intersection of Multiple Arrays
#
from typing import List
from functools import reduce

# @lc code=start
class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        return sorted(list(reduce(lambda x, y: set(x) & set(y), nums)))


# @lc code=end
