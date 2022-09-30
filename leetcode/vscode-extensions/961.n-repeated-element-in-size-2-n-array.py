#
# @lc app=leetcode id=961 lang=python3
#
# [961] N-Repeated Element in Size 2N Array
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        size = len(nums) // 2
        counter = Counter(nums)

        for c in counter.most_common():
            if c[1] == size:
                return c[0]

        return 0


# @lc code=end
