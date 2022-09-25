#
# @lc app=leetcode id=2220 lang=python3
#
# [2220] Minimum Bit Flips to Convert Number
#

# @lc code=start
class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        bs = bin(start)[2:]
        gs = bin(goal)[2:]

        if start > goal:
            gs = "0" * (len(bs) - len(gs)) + gs
        else:
            bs = "0" * (len(gs) - len(bs)) + bs

        flip = 0

        for b, g in zip(bs, gs):
            if b != g:
                flip += 1

        return flip


# @lc code=end
