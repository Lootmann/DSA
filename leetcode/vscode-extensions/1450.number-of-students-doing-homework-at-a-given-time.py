#
# @lc app=leetcode id=1450 lang=python3
#
# [1450] Number of Students Doing Homework at a Given Time
#
from typing import List

# @lc code=start
class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        res = 0

        for s, e in zip(startTime, endTime):
            if s <= queryTime <= e:
                res += 1

        return res


# @lc code=end
