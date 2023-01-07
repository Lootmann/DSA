#
# @lc app=leetcode id=389 lang=python3
#
# [389] Find the Difference
#

# @lc code=start
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        mp = dict()

        for ch in t:
            if ch not in mp:
                mp[ch] = 0
            mp[ch] += 1

        for ch in s:
            mp[ch] -= 1

        for ch, num in mp.items():
            if num == 1:
                return ch


# @lc code=end
