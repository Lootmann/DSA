#
# @lc app=leetcode id=476 lang=python3
#
# [476] Number Complement
#

# @lc code=start
class Solution:
    def findComplement(self, num: int) -> int:
        binary = bin(num)[2:]
        rev = ["0" if b == "1" else "1" for b in binary]
        return int("".join(rev), 2)


# @lc code=end
