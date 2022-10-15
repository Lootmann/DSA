#
# @lc app=leetcode id=2085 lang=python3
#
# [2085] Count Common Words With One Occurrence
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        count = 0
        counter1 = Counter(words1)
        counter2 = Counter(words2)

        for word, times1 in counter1.items():
            if word in counter2:
                times2 = counter2[word]
                if times1 == 1 and times2 == 1:
                    count += 1

        return count


# @lc code=end
