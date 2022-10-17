#
# @lc app=leetcode id=2215 lang=python3
#
# [2215] Find the Difference of Two Arrays
#
from typing import List

# @lc code=start
class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        res1, res2 = [], []
        set1, set2 = set(nums1), set(nums2)

        for num in set1:
            if num not in set2:
                res1.append(num)

        for num in set2:
            if num not in set1:
                res2.append(num)

        return [res1, res2]


# @lc code=end
