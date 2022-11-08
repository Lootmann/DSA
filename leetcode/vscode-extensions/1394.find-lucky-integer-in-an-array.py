#
# @lc app=leetcode id=1394 lang=python3
#
# [1394] Find Lucky Integer in an Array
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def findLucky(self, arr: List[int]) -> int:
        counter = Counter(arr)
        res = [-1]

        for key, value in counter.items():
            if key == value:
                res.append(value)

        return max(res)


# @lc code=end
