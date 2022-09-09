#
# @lc app=leetcode id=1221 lang=python3
#
# [1221] Split a String in Balanced Strings
#

# @lc code=start
class Solution:
    def balancedStringSplit(self, s: str) -> int:
        l = r = 0
        cnt = 0

        for ch in s:
            if ch == "L":
                l += 1
            if ch == "R":
                r += 1
            if l == r:
                cnt += 1

        return cnt


# @lc code=end
