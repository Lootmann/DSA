#
# @lc app=leetcode id=1720 lang=python3
#
# [1720] Decode XORed Array
#
from typing import List

# @lc code=start
class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        res = [first]

        for i in range(len(encoded)):
            res.append(res[i] ^ encoded[i])

        return res


# @lc code=end
