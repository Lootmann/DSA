#
# @lc app=leetcode id=1598 lang=python3
#
# [1598] Crawler Log Folder
#
from typing import List

# @lc code=start
class Solution:
    def minOperations(self, logs: List[str]) -> int:
        height = 0

        for log in logs:
            if log == "./":
                pass
            elif log == "../":
                height = max(0, height - 1)
            else:
                height += 1

        return height


# @lc code=end
