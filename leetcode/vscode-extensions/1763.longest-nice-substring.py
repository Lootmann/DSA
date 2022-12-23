#
# @lc app=leetcode id=1763 lang=python3
#
# [1763] Longest Nice Substring
#

# @lc code=start
class Solution:
    def isNice(self, s):
        for ch in s:
            if ch.lower() not in s or ch.upper() not in s:
                return False
        return True

    def longestNiceSubstring(self, s: str) -> str:
        n = len(s)
        answ = ""

        for left in range(n - len(answ)):
            right = n
            while right - left > len(answ):
                if self.isNice(s[left:right]):
                    answ = s[left:right]
                right -= 1

        return answ
