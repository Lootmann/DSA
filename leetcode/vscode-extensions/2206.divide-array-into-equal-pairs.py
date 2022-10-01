#
# @lc app=leetcode id=2206 lang=python3
#
# [2206] Divide Array Into Equal Pairs
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        counter = Counter(nums)
        is_ok = True

        for c in counter.most_common():
            if c[1] % 2 != 0:
                is_ok = False

        return is_ok


# @lc code=end
