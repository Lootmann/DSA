#
# @lc app=leetcode id=1614 lang=python3
#
# [1614] Maximum Nesting Depth of the Parentheses
#

# @lc code=start
class Solution:
    def maxDepth(self, s: str) -> int:
        ans = 0
        current = 0

        for ch in s:
            if ch == "(":
                current += 1
                ans = max(ans, current)

            if ch == ")":
                current -= 1

        return ans


# @lc code=end
