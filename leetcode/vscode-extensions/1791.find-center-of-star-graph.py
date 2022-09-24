#
# @lc app=leetcode id=1791 lang=python3
#
# [1791] Find Center of Star Graph
#
from typing import List

# @lc code=start
class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        size = len(edges)
        d = dict()

        for edge in edges:
            for node in edge:
                if node not in d:
                    d[node] = 0
                d[node] += 1

        print(size)
        print(d)

        for key, value in d.items():
            if value == size:
                return key

        return -1


# @lc code=end
