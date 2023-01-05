#
# @lc app=leetcode id=1652 lang=python3
#
# [1652] Defuse the Bomb
#
from typing import List

# @lc code=start
class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        n = len(code)
        if k == 0:
            return [0] * n

        tmp = code
        code = code * 2

        for i in range(n):
            if k > 0:
                tmp[i] = sum(code[i + 1 : i + k + 1])
            else:
                tmp[i] = sum(code[i + n + k : i + n])

        return tmp


# @lc code=end
