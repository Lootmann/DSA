#
# @lc app=leetcode id=2032 lang=python3
#
# [2032] Two Out of Three
#
from typing import List
from collections import defaultdict

# @lc code=start
class Solution:
    def twoOutOfThree(self, nums1: List[int], nums2: List[int], nums3: List[int]) -> List[int]:
        d = defaultdict(int)

        for n in set(nums1):
            d[n] += 1

        for n in set(nums2):
            d[n] += 1

        for n in set(nums3):
            d[n] += 1

        res = []

        for k, v in d.items():
            if v >= 2:
                res.append(k)

        return res


# @lc code=end
