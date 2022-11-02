#
# @lc app=leetcode id=2138 lang=python3
#
# [2138] Divide a String Into Groups of Size k
#
from typing import List

# @lc code=start
class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        if len(s) % k != 0:
            s += fill * (k - len(s) % k)

        res = [s[k * i : k * i + k] for i in range(len(s) // k)]

        return res


# @lc code=end
