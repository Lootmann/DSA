#
# @lc app=leetcode id=1974 lang=python3
#
# [1974] Minimum Time to Type Word Using Special Typewriter
#

# @lc code=start
class Solution:
    def min_dist(self, first: str, second: str) -> int:
        dist = abs(ord(first) - ord(second))
        return min(dist, 26 - dist)

    def minTimeToType(self, word: str) -> int:
        word = "a" + word
        total_dist = 0

        for i in range(len(word) - 1):
            total_dist += self.min_dist(word[i], word[i + 1])
            total_dist += 1

        return total_dist


# @lc code=end
