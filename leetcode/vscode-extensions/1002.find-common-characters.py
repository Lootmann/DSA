#
# @lc app=leetcode id=1002 lang=python3
#
# [1002] Find Common Characters
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def commonChars(aself, words: List[str]) -> List[str]:
        d = Counter(words[0])

        for word in words:
            d &= Counter(word)

        return list(d.elements())


# @lc code=end
