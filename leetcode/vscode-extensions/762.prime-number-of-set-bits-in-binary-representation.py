#
# @lc app=leetcode id=762 lang=python3
#
# [762] Prime Number of Set Bits in Binary Representation
#

# @lc code=start
class Solution:
    def is_prime(self, num: int) -> bool:
        return num in (2, 3, 5, 7, 11, 13, 17, 19)

    def countPrimeSetBits(self, left: int, right: int) -> int:
        count = 0

        for num in range(left, right + 1):
            if self.is_prime(bin(num).count("1")):
                count += 1

        return count


# @lc code=end
