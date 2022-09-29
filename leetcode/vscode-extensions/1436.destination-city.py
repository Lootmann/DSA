#
# @lc app=leetcode id=1436 lang=python3
#
# [1436] Destination City
#
from typing import List
from collections import defaultdict

# @lc code=start
class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        start = set()
        end = set()

        for path in paths:
            start.add(path[0])
            end.add(path[1])

        return list((end - start))[0]


# @lc code=end
