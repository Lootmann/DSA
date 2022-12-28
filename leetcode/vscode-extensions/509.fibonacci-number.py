#
# @lc app=leetcode id=509 lang=python3
#
# [509] Fibonacci Number
#

# @lc code=start
class Solution:
    def fib(self, n: int) -> int:
        f1, f2, f3 = 0, 1, 1

        if n == 0:
            return f1

        if n == 1:
            return f2

        for _ in range(n - 1):
            f3 = f2 + f1
            f1, f2 = f2, f3

        return f3


# @lc code=end
