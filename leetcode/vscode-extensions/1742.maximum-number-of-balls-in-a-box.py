#
# @lc app=leetcode id=1742 lang=python3
#
# [1742] Maximum Number of Balls in a Box
#
from collections import defaultdict

# @lc code=start
class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        d = defaultdict(int)

        for i in range(lowLimit, highLimit + 1):
            n = i
            total = 0
            while n != 0:
                div, mod = divmod(n, 10)
                total += mod
                n = div

            d[total] += 1

        return max(d.values())


# @lc code=end
