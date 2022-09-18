#
# @lc app=leetcode id=2367 lang=python3
#
# [2367] Number of Arithmetic Triplets
#
from typing import List

# @lc code=start
class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        count = 0
        size = len(nums)

        for i in range(size):
            for j in range(i + 1, size):
                for k in range(j + 1, size):
                    diff1 = abs(nums[i] - nums[j])
                    diff2 = abs(nums[j] - nums[k])

                    if diff1 == diff and diff2 == diff:
                        count += 1

        return count


# @lc code=end
