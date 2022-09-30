#
# @lc app=leetcode id=1979 lang=python3
#
# [1979] Find Greatest Common Divisor of Array
#
from typing import List
from math import gcd

# @lc code=start
class Solution:
    def findGCD(self, nums: List[int]) -> int:
        maxv, minv = max(nums), min(nums)
        return gcd(maxv, minv)


# @lc code=end
