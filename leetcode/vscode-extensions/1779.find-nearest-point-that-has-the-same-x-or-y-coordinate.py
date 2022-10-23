#
# @lc app=leetcode id=1779 lang=python3
#
# [1779] Find Nearest Point That Has the Same X or Y Coordinate
#
from typing import List

# @lc code=start
class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        min_dist = 10000**2
        ans = -1

        for i, _ in enumerate(points):
            if points[i][0] == x or points[i][1] == y:
                manhattan = abs(points[i][0] - x) + abs(points[i][1] - y)

                if manhattan < min_dist:
                    ans = i
                    min_dist = manhattan

        return ans


# @lc code=end
