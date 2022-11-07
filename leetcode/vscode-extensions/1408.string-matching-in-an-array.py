#
# @lc app=leetcode id=1408 lang=python3
#
# [1408] String Matching in an Array
#
from typing import List

# @lc code=start
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        substrings = set(words)
        res = set()

        for word in words:
            for target in words:
                if word != target and target.find(word) != -1:
                    res.add(word)

        return list(res)


# @lc code=end
