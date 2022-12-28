#
# @lc app=leetcode id=2000 lang=python3
#
# [2000] Reverse Prefix of Word
#

# @lc code=start
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        idx = word.find(ch)

        if idx == -1:
            return word

        first = word[: idx + 1]
        last = word[idx + 1 :]

        return first[::-1] + last


# @lc code=end
