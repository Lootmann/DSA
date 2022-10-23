#
# @lc app=leetcode id=2078 lang=python3
#
# [2078] Two Furthest Houses With Different Colors
#
from typing import List

# @lc code=start
class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        max_dist = -1

        for i in range(len(colors)):
            c1 = colors[i]
            for j in range(len(colors)):
                c2 = colors[j]
                if c1 != c2:
                    max_dist = max(max_dist, abs(i - j))

        return max_dist


# @lc code=end
