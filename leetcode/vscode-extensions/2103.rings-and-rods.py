#
# @lc app=leetcode id=2103 lang=python3
#
# [2103] Rings and Rods
#

# @lc code=start
class Solution:
    def color2idx(self, color: str) -> int:
        if color == "R":
            return 0
        if color == "G":
            return 1
        return 2

    def countPoints(self, rings: str) -> int:
        rods = [[0, 0, 0] for _ in range(10)]

        for i in range(0, len(rings), 2):
            color, idx = list(rings[i : i + 2])
            rods[int(idx)][self.color2idx(color)] = 1

        count = 0

        for rod in rods:
            if rod == [1, 1, 1]:
                count += 1

        return count


# @lc code=end
