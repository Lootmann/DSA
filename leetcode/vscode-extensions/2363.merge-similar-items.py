#
# @lc app=leetcode id=2363 lang=python3
#
# [2363] Merge Similar Items
#
from typing import List
from collections import defaultdict

# @lc code=start
class Solution:
    def mergeSimilarItems(self, items1: List[List[int]], items2: List[List[int]]) -> List[List[int]]:
        d = defaultdict(int)

        for item in items1 + items2:
            d[item[0]] += item[1]

        res = []

        for k, v in d.items():
            res.append([k, v])

        res.sort()

        return res


# @lc code=end
