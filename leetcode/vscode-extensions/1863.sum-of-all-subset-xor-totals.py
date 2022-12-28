#
# @lc app=leetcode id=1863 lang=python3
#
# [1863] Sum of All Subset XOR Totals
#
from typing import List

# @lc code=start
class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        total = 0
        size = len(nums)

        for bit in range(1 << size):
            arr = []
            for i in range(size):
                if bit & (1 << i):
                    arr.append(nums[i])

            if len(arr) != 0:
                if len(arr) == 1:
                    total += arr[0]
                else:
                    current = arr[0]
                    for num in arr[1:]:
                        current ^= num
                    total += current

        return total


# @lc code=end
