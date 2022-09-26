#
# @lc app=leetcode id=2176 lang=python3
#
# [2176] Count Equal and Divisible Pairs in an Array
#
from typing import List

# @lc code=start
class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        length = len(nums)
        count = 0

        for i in range(length):
            for j in range(i + 1, length):
                if nums[i] == nums[j] and (i * j) % k == 0:
                    count += 1

        return count


# @lc code=end
