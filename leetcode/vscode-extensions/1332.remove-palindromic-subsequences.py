#
# @lc app=leetcode id=1332 lang=python3
#
# [1332] Remove Palindromic Subsequences
#

# @lc code=start
class Solution:
    def is_palindrome(self, s: str) -> bool:
        return s == s[::-1]

    def removePalindromeSub(self, s: str) -> int:
        if self.is_palindrome(s):
            return 1

        if s == "":
            return 0

        return 2


# @lc code=end
