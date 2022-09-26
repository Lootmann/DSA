#
# @lc app=leetcode id=1816 lang=python3
#
# [1816] Truncate Sentence
#

# @lc code=start
class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        splitted = s.split(" ")

        if len(splitted) <= k:
            return s

        return " ".join(splitted[:k])


# @lc code=end
