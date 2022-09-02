#
# @lc app=leetcode id=1512 lang=python3
#
# [1512] Number of Good Pairs
#
from typing import List

# @lc code=start
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        cnt = 0
        length = len(nums)

        for i in range(length):
            for j in range(i + 1, length):
                if nums[i] == nums[j]:
                    cnt += 1

        return cnt


# @lc code=end
