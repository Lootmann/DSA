#
# @lc app=leetcode id=1748 lang=python3
#
# [1748] Sum of Unique Elements
#
from typing import List

# @lc code=start
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        arr = [0] * 101

        for num in nums:
            arr[num] += 1

        ans = 0

        for i in range(101):
            if arr[i] == 1:
                ans += i

        return ans


# @lc code=end
