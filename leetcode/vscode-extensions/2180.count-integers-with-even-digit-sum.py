#
# @lc app=leetcode id=2180 lang=python3
#
# [2180] Count Integers With Even Digit Sum
#

# @lc code=start
class Solution:
    def countEven(self, num: int) -> int:
        def sum_digit(n: int) -> int:
            count = 0
            for ch in list(str(n)):
                num = int(ch)
                count += num
            return count

        count = 0

        for n in range(1, num + 1):
            if sum_digit(n) % 2 == 0:
                count += 1

        return count


# @lc code=end
