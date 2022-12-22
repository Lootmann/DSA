#
# @lc app=leetcode id=868 lang=python3
#
# [868] Binary Gap
#

# @lc code=start
class Solution:
    def binaryGap(self, n: int) -> int:
        bit = str(bin(n)[2:])
        dist = [i for i, b in enumerate(bit) if b == "1"]

        max_dist = 0
        for i in range(len(dist) - 1):
            max_dist = max(max_dist, abs(dist[i] - dist[i + 1]))

        return max_dist


# @lc code=end
