#
# @lc app=leetcode id=2243 lang=python3
#
# [2243] Calculate Digit Sum of a String
#

# @lc code=start
class Solution:
    def sum_digit(self, s) -> str:
        total = 0
        for ch in s:
            total += int(ch)

        return str(total)

    def digitSum(self, s: str, k: int) -> str:

        while len(s) > k:
            l = [s[k * i : k * i + k] for i in range((len(s) + k - 1) // k)]
            s = "".join(map(self.sum_digit, l))

        return s


# @lc code=end
