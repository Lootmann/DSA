#
# @lc app=leetcode id=657 lang=python3
#
# [657] Robot Return to Origin
#

# @lc code=start
class Solution:
    def judgeCircle(self, moves: str) -> bool:
        pos = [0, 0]

        for move in moves:
            if move == "U":
                pos[0] += 1
            if move == "D":
                pos[0] -= 1
            if move == "L":
                pos[1] += 1
            if move == "R":
                pos[1] -= 1

        return pos[0] == 0 and pos[1] == 0


# @lc code=end
