#
# @lc app=leetcode id=1295 lang=python3
#
# [1295] Find Numbers with Even Number of Digits
#
from typing import List

# @lc code=start
class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        return sum([len(str(num)) % 2 == 0 for num in nums])


# @lc code=end
