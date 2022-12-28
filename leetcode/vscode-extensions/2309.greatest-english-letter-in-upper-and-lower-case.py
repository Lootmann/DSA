#
# @lc app=leetcode id=2309 lang=python3
#
# [2309] Greatest English Letter in Upper and Lower Case
#
from string import ascii_lowercase, ascii_uppercase


# @lc code=start
class Solution:
    def greatestLetter(self, s: str) -> str:
        counter = [0 for _ in range(26)]

        for ch in set(s):
            if ch.islower():
                counter[ord(ch) - ord("a")] += 1
            else:
                counter[ord(ch) - ord("A")] += 1

        ans = ""

        for i in range(26):
            if counter[i] > 1:
                ans = chr(ord("A") + i)

        return ans


# @lc code=end
