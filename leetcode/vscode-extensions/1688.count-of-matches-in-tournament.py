#
# @lc app=leetcode id=1688 lang=python3
#
# [1688] Count of Matches in Tournament
#

# @lc code=start
class Solution:
    def numberOfMatches(self, n: int) -> int:
        matches = 0

        while n != 1:
            div, mod = divmod(n, 2)
            matches += div

            if mod == 0:
                n = div
            else:
                n = div + 1

        return matches


# @lc code=end
