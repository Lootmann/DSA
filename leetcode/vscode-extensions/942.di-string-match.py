#
# @lc app=leetcode id=942 lang=python3
#
# [942] DI String Match
#
from typing import List

# @lc code=start
class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        res = []
        low, high = 0, len(s)

        for c in s:
            if c == "I":
                res.append(low)
                low += 1
            else:
                res.append(high)
                high -= 1

        res.append(low)

        return res


# @lc code=end
