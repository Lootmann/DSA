#
# @lc app=leetcode id=338 lang=python3
#
# [338] Counting Bits
#
from typing import List

# @lc code=start
class Solution:
    def countBits(self, n: int) -> List[int]:
        res = []

        for i in range(0, n + 1):
            res.append(bin(i).count("1"))

        return res


# @lc code=end
