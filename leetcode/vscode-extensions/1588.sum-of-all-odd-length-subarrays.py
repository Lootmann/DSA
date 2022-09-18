#
# @lc app=leetcode id=1588 lang=python3
#
# [1588] Sum of All Odd Length Subarrays
#
from typing import List

# @lc code=start
class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        total = 0

        for i in range(1, len(arr) + 1, 2):
            for j in range(len(arr) - i + 1):
                total += sum(arr[j : j + i])

        return total


# @lc code=end
