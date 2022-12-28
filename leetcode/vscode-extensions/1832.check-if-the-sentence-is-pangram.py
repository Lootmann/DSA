#
# @lc app=leetcode id=1832 lang=python3
#
# [1832] Check if the Sentence Is Pangram
#
from string import ascii_lowercase

# @lc code=start
class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        return set(sentence) == set(ascii_lowercase)


# @lc code=end
