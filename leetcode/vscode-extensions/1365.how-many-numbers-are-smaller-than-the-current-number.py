#
# @lc app=leetcode id=1365 lang=python3
#
# [1365] How Many Numbers Are Smaller Than the Current Number
#
from typing import List

# @lc code=start
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(nums)
        ranked = {}

        for i in range(len(sorted_nums)):
            if sorted_nums[i] not in ranked:
                ranked[sorted_nums[i]] = i

        ans = []
        for num in nums:
            ans.append(ranked[num])

        return ans


# @lc code=end
