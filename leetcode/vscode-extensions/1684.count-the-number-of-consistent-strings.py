#
# @lc app=leetcode id=1684 lang=python3
#
# [1684] Count the Number of Consistent Strings
#
from typing import List

# @lc code=start
class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        st = set(allowed)
        count = 0

        for word in words:
            is_include = True
            for ch in word:
                if ch not in st:
                    is_include = False

            if is_include:
                count += 1

        return count


# @lc code=end
