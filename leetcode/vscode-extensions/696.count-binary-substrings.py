#
# @lc app=leetcode id=696 lang=python3
#
# [696] Count Binary Substrings
#

# @lc code=start
class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        cur, nxt = 0, 1
        ans = 0

        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                nxt += 1
            else:
                ans += min(cur, nxt)
                cur = nxt
                nxt = 1

        ans += min(cur, nxt)

        return ans


# @lc code=end
