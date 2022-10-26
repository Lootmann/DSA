#
# @lc app=leetcode id=2164 lang=python3
#
# [2164] Sort Even and Odd Indices Independently
#
from typing import List

# @lc code=start
class Solution:
    def sortEvenOdd(self, nums: List[int]) -> List[int]:
        odd, even = [], []

        for i in range(len(nums)):
            if i % 2 == 0:
                even.append(nums[i])
            else:
                odd.append(nums[i])

        even.sort()
        odd.sort(reverse=True)

        res = []

        for i in range(min(len(even), len(odd))):
            res.append(even[i])
            res.append(odd[i])

        if len(even) != len(odd):
            res.append(even[-1])

        return res


# @lc code=end
