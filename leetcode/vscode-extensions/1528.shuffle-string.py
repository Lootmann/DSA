#
# @lc app=leetcode id=1528 lang=python3
#
# [1528] Shuffle String
#
from typing import List

# @lc code=start
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        res = [None] * len(s)

        for i in range(len(s)):
            res[indices[i]] = s[i]

        return "".join(res)


# @lc code=end
