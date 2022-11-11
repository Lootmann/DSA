#
# @lc app=leetcode id=1009 lang=python3
#
# [1009] Complement of Base 10 Integer
#

# @lc code=start
class Solution:
    def bitwiseComplement(self, n: int) -> int:
        bit = bin(n)[2:]
        rev = "".join(["0" if ch == "1" else "1" for ch in bit]).lstrip("0")

        if rev == "":
            return 0

        return int(rev, 2)


# @lc code=end
