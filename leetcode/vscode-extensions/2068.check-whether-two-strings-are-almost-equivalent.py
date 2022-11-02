#
# @lc app=leetcode id=2068 lang=python3
#
# [2068] Check Whether Two Strings are Almost Equivalent
#
from collections import Counter

# @lc code=start
class Solution:
    def checkAlmostEquivalent(self, word1: str, word2: str) -> bool:
        counter1 = Counter(word1)
        counter2 = Counter(word2)
        ch_set = set(word1 + word2)

        max_diff = 0

        for ch in ch_set:
            if ch in counter1 and ch in counter2:
                max_diff = max(max_diff, abs(counter1[ch] - counter2[ch]))

            elif ch in counter1:
                max_diff = max(max_diff, counter1[ch])

            elif ch in counter2:
                max_diff = max(max_diff, counter2[ch])

            else:
                pass

        return max_diff <= 3


# @lc code=end
