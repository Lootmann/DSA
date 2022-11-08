#
# @lc app=leetcode id=1491 lang=python3
#
# [1491] Average Salary Excluding the Minimum and Maximum Salary
#
from typing import List

# @lc code=start
class Solution:
    def average(self, salary: List[int]) -> float:
        total = sum(salary) - max(salary) - min(salary)
        return total / (len(salary) - 2)


# @lc code=end
