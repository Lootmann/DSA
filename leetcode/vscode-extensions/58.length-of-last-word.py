#
# @lc app=leetcode id=58 lang=python3
#
# [58] Length of Last Word
#

# @lc code=start
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        splitted = []
        for word in s.split(" "):
            if word != "":
                splitted.append(word)
        return len(splitted[-1])


# @lc code=end
