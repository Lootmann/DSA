#
# @lc app=leetcode id=2224 lang=python3
#
# [2224] Minimum Number of Operations to Convert Time
#

# @lc code=start
class Solution:
    def convertTime(self, current: str, correct: str) -> int:
        def conv(s: str) -> int:
            return int(s[0:2]) * 60 + int(s[3:5])

        diff = conv(correct) - conv(current)
        count = 0

        for weight in [60, 15, 5, 1]:
            count += int(diff // weight)
            diff %= weight

        return count


# @lc code=end
