#
# @lc app=leetcode id=693 lang=python3
#
# [693] Binary Number with Alternating Bits
#

# @lc code=start
class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        s = bin(n)[2:]
        for i in range(len(s) - 1):
            if s[i] == s[i + 1]:
                return False
        return True


# @lc code=end
