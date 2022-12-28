#
# @lc app=leetcode id=2351 lang=python3
#
# [2351] First Letter to Appear Twice
#

# @lc code=start
class Solution:
    def repeatedCharacter(self, s: str) -> str:
        alpha = [0] * 26

        for ch in s:
            idx = ord(ch) - ord("a")
            alpha[idx] += 1

            if alpha[idx] > 1:
                return ch

        return "???"


# @lc code=end
