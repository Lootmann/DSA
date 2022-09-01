#
# @lc app=leetcode id=171 lang=python3
#
# [171] Excel Sheet Column Number
#

# @lc code=start
class Solution:
    def convertToTitle(self, cn: int) -> str:
        ans = []

        while cn > 0:
            cn, mod = divmod(cn - 1, 26)
            ans.append(chr(mod + ord("A")))

        return "".join(reversed(ans))


# @lc code=end
