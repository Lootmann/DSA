#
# @lc app=leetcode id=2283 lang=python3
#
# [2283] Check if Number Has Equal Digit Count and Digit Value
#
from collections import defaultdict

# @lc code=start
class Solution:
    def digitCount(self, num: str) -> bool:
        d = defaultdict(int)

        for s in num:
            d[s] += 1

        for idx, s in enumerate(num):
            if str(idx) in d:
                if d[str(idx)] != int(s):
                    return False
            else:
                if s != "0":
                    return False

        return True


# @lc code=end
