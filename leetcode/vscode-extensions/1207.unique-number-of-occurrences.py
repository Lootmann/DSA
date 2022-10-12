#
# @lc app=leetcode id=1207 lang=python3
#
# [1207] Unique Number of Occurrences
#
from typing import List
from collections import Counter

# @lc code=start
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        counter = Counter(arr)
        set_arr = set(arr)
        set_occurence = set(counter.values())

        return len(set_arr) == len(set_occurence)


# @lc code=end
