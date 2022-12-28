#
# @lc app=leetcode id=2042 lang=python3
#
# [2042] Check if Numbers Are Ascending in a Sentence
#

# @lc code=start
class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        prev = -1

        for num in map(int, filter(lambda x: not "a" <= x[0] <= "z", s.split(" "))):
            if prev >= num:
                return False
            prev = num

        return True


# @lc code=end
