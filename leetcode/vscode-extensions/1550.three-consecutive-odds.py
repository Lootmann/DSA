#
# @lc app=leetcode id=1550 lang=python3
#
# [1550] Three Consecutive Odds
#
from typing import List

# @lc code=start
class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        def is_odd(num: int) -> bool:
            return num % 2 == 1

        for i in range(len(arr) - 2):
            if is_odd(arr[i]) and is_odd(arr[i + 1]) and is_odd(arr[i + 2]):
                return True
        return False


# @lc code=end
