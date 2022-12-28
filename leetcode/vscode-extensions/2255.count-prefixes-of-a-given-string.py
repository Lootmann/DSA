#
# @lc app=leetcode id=2255 lang=python3
#
# [2255] Count Prefixes of a Given String
#
from typing import List

# @lc code=start
class Solution:
    def countPrefixes(self, words: List[str], s: str) -> int:
        count = 0
        for word in words:
            if s[: len(word)] == word:
                count += 1
        return count


# @lc code=end
