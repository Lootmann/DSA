#
# @lc app=leetcode id=884 lang=python3
#
# [884] Uncommon Words from Two Sentences
#
from typing import List
from collections import defaultdict

# @lc code=start
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        d1, d2 = defaultdict(int), defaultdict(int)

        for word in s1.split(" "):
            d1[word] += 1

        for word in s2.split(" "):
            d2[word] += 1

        res = []

        for word, value in d1.items():
            if value == 1 and word not in d2:
                res.append(word)

        for word, value in d2.items():
            if value == 1 and word not in d1:
                res.append(word)

        return res


# @lc code=end
