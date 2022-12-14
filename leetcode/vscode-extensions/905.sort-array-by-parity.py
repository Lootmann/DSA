#
# @lc app=leetcode id=905 lang=python3
#
# [905] Sort Array By Parity
#
from typing import List

# @lc code=start
class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        res = []

        for num in nums:
            if num % 2 == 0:
                res.append(num)

        for num in nums:
            if num % 2 == 1:
                res.append(num)

        return res


# @lc code=end
