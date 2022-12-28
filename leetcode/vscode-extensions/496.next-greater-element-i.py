#
# @lc app=leetcode id=496 lang=python3
#
# [496] Next Greater Element I
#
from typing import List

# @lc code=start
class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = []

        for num in nums1:
            found = False

            for i in range(len(nums2)):
                if num == nums2[i]:
                    for j in range(i + 1, len(nums2)):
                        if num < nums2[j]:
                            res.append(nums2[j])
                            found = True
                            break

            if not found:
                res.append(-1)

        return res


# @lc code=end
