#
# @lc app=leetcode id=1122 lang=python3
#
# [1122] Relative Sort Array
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        counter = Counter(arr1)

        res = []

        for num in arr2:
            for _ in range(counter[num]):
                res.append(num)
            counter[num] = 0

        rest = []
        for key, value in counter.items():
            for _ in range(value):
                rest.append(key)

        rest.sort()
        return res + rest


# @lc code=end
