#
# @lc app=leetcode id=1876 lang=python3
#
# [1876] Substrings of Size Three with Distinct Characters
#

# @lc code=start
class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        count = 0
        for i in range(len(s) - 2):
            a, b, c = s[i : i + 3]
            if a != b and b != c and c != a:
                count += 1
        return count


# @lc code=end
