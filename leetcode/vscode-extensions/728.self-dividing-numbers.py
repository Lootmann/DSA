#
# @lc app=leetcode id=728 lang=python3
#
# [728] Self Dividing Numbers
#
from typing import List

# @lc code=start
class Solution:
    def can_divide(self, num: int) -> bool:
        is_ok = True

        for n in list(str(num)):
            if n == "0":
                return False

            is_ok &= num % int(n) == 0

        return is_ok

    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res = []

        for num in range(left, right + 1):
            if self.can_divide(num):
                res.append(num)

        return res


# @lc code=end
