#
# @lc app=leetcode id=1941 lang=python3
#
# [1941] Check if All Characters Have Equal Number of Occurrences
#

# @lc code=start
class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        d = {}

        for ch in s:
            if ch not in d:
                d[ch] = 0
            d[ch] += 1

        s = set(d.values())

        return len(s) == 1


# @lc code=end
