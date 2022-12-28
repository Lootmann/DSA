#
# @lc app=leetcode id=1680 lang=python3
#
# [1680] Concatenation of Consecutive Binary Numbers
#

# @lc code=start
class Solution:
    def concatenatedBinary(self, n: int) -> int:
        ans = 0
        MOD = 10**9 + 7

        for i in range(1, n + 1):
            shift = len(bin(i)[2:])
            ans = ((ans << shift) % MOD + i) % MOD

        return ans


# @lc code=end
