#
# @lc app=leetcode id=1470 lang=python3
#
# [1470] Shuffle the Array
#
from typing import List

# @lc code=start
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        ans = []
        for head, tail in zip(nums[:n], nums[n:]):
            ans.append(head)
            ans.append(tail)
        return ans


# @lc code=end
