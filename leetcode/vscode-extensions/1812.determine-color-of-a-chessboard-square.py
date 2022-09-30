#
# @lc app=leetcode id=1812 lang=python3
#
# [1812] Determine Color of a Chessboard Square
#

# @lc code=start
class Solution:
    def squareIsWhite(self, c: str) -> bool:
        row = ord(c[1]) - ord("1") + 1
        col = ord(c[0]) - ord("a") + 1

        return (row + col) % 2 != 0


# @lc code=end
