#
# @lc app=leetcode id=1837 lang=python3
#
# [1837] Sum of Digits in Base K
#

# @lc code=start
class Solution:
    def sumBase(self, n: int, k: int) -> int:
        ans = 0

        while n > 0:
            div, mod = divmod(n, k)
            ans += mod
            n = div

        return ans


# @lc code=end
