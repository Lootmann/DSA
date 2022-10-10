#
# @lc app=leetcode id=461 lang=python3
#
# [461] Hamming Distance
#

# @lc code=start
class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        x_bit = bin(x)[2:]
        y_bit = bin(y)[2:]

        if x < y:
            x_bit = "0" * (len(y_bit) - len(x_bit)) + x_bit
        else:
            y_bit = "0" * (len(x_bit) - len(y_bit)) + y_bit

        count = 0
        for a, b in zip(x_bit, y_bit):
            if a != b:
                count += 1
        return count


# @lc code=end
