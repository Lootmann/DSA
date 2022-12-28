#
# @lc app=leetcode id=2124 lang=python3
#
# [2124] Check if All A's Appears Before All B's
#

# @lc code=start
class Solution:
    def checkString(self, s: str) -> bool:
        if s.count("a") == 0 or s.count("b") == 0:
            return True

        return s.rindex("a") < s.index("b")


# @lc code=end
