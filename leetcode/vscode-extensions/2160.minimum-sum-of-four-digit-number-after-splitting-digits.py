#
# @lc app=leetcode id=2160 lang=python3
#
# [2160] Minimum Sum of Four Digit Number After Splitting Digits
#

# @lc code=start
class Solution:
    def minimumSum(self, num: int) -> int:
        a, b, c, d = sorted(str(num))
        return int(a + c) + int(b + d)


# @lc code=end
