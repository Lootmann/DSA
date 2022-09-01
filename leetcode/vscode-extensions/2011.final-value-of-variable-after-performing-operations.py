#
# @lc app=leetcode id=2011 lang=python3
#
# [2011] Final Value of Variable After Performing Operations
#
from typing import List

# @lc code=start
class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        ans = 0

        for op in operations:
            if op[1] == "+":
                ans += 1
            else:
                ans -= 1
        return ans


# @lc code=end
