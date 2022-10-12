#
# @lc app=leetcode id=2357 lang=python3
#
# [2357] Make Array Zero by Subtracting Equal Amounts
#
from typing import List

# @lc code=start
class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        cnt = 0

        while True:
            if max(nums) == 0:
                break
            cnt += 1

            minv = 1001

            for num in nums:
                if num != 0:
                    minv = min(minv, num)

            for i in range(len(nums)):
                if nums[i] - minv <= 0:
                    nums[i] = 0
                else:
                    nums[i] -= minv

            print(nums)

        return cnt


# @lc code=end
