#
# @lc app=leetcode id=2053 lang=python3
#
# [2053] Kth Distinct String in an Array
#
from typing import List
from collections import Counter


# @lc code=start
class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        counter = Counter(arr)

        for ch in arr:
            if counter[ch] == 1:
                k -= 1

            if k == 0:
                return ch

        return ""


# @lc code=end
