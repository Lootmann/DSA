#
# @lc app=leetcode id=682 lang=python3
#
# [682] Baseball Game
#
from typing import List

# @lc code=start
class Solution:
    def calPoints(self, operations: List[str]) -> int:
        res = []

        for op in operations:
            if op == "+":
                res.append(res[-2] + res[-1])
            elif op == "C":
                res.pop()
            elif op == "D":
                res.append(res[-1] * 2)
            else:
                res.append(int(op))

        return sum(res)


# @lc code=end
