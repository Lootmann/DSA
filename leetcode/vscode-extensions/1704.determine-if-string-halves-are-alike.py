#
# @lc app=leetcode id=1704 lang=python3
#
# [1704] Determine if String Halves Are Alike
#

# @lc code=start
class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        length = len(s) // 2
        first = s[:length]
        last = s[length:]

        count_first, count_last = 0, 0

        for ch in first:
            if ch in ("a", "e", "i", "o", "u", "A", "E", "I", "O", "U"):
                count_first += 1

        for ch in last:
            if ch in ("a", "e", "i", "o", "u", "A", "E", "I", "O", "U"):
                count_last += 1

        return count_first == count_last


# @lc code=end
