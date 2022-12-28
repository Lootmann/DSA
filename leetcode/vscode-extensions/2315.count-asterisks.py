#
# @lc app=leetcode id=2315 lang=python3
#
# [2315] Count Asterisks
#

# @lc code=start
class Solution:
    def countAsterisks(self, s: str) -> int:
        count = 0
        splitted = s.split("|")

        for i in range(0, len(splitted), 2):
            count += splitted[i].count("*")

        return count


# @lc code=end
