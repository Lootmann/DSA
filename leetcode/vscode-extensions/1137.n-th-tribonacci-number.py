#
# @lc app=leetcode id=1137 lang=python3
#
# [1137] N-th Tribonacci Number
#

# @lc code=start
class Solution:
    def tribonacci(self, n: int) -> int:
        dp = [0] * 38
        dp[0], dp[1], dp[2] = 0, 1, 1

        for i in range(n - 3 + 1):
            dp[i + 3] = dp[i + 2] + dp[i + 1] + dp[i]

        return dp[n]


# @lc code=end
