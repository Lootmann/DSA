#
# @lc app=leetcode id=2185 lang=python3
#
# [2185] Counting Words With a Given Prefix
#
from typing import List

# @lc code=start
class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        count = 0

        for word in words:
            if len(word) >= len(pref):
                if word[: len(pref)] == pref:
                    count += 1

        return count


# @lc code=end
