#
# @lc app=leetcode id=500 lang=python3
#
# [500] Keyboard Row
#
from typing import List

# @lc code=start
class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        rows = [
            set("qwertyuiop"),
            set("asdfghjkl"),
            set("zxcvbnm"),
        ]

        res = []

        for word in words:
            word_set = set(word.lower())

            for row in rows:
                if word_set <= row:
                    res.append(word)

        return res


# @lc code=end
