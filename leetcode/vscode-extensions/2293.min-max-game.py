#
# @lc app=leetcode id=2293 lang=python3
#
# [2293] Min Max Game
#
from typing import List

# @lc code=start
class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        res = []

        while len(nums) > 1:
            res = []
            for idx, i in enumerate(range(0, len(nums), 2)):
                if idx % 2 == 0:
                    res.append(min(nums[i], nums[i + 1]))
                else:
                    res.append(max(nums[i], nums[i + 1]))

            nums = res

        return res[0]


# @lc code=end
