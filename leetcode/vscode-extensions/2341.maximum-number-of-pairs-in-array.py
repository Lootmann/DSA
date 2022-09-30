#
# @lc app=leetcode id=2341 lang=python3
#
# [2341] Maximum Number of Pairs in Array
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        res = [0] * 2
        counter = Counter(nums)

        for c in counter.values():
            div, mod = divmod(c, 2)
            res[0] += div
            res[1] += mod

        return res


# @lc code=end
