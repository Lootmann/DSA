#
# @lc app=leetcode id=2114 lang=python3
#
# [2114] Maximum Number of Words Found in Sentences
#
from typing import List

# @lc code=start
class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxv = 0
        for words in sentences:
            maxv = max(maxv, words.count(" ") + 1)
        return maxv


# @lc code=end
