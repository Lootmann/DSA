#
# @lc app=leetcode id=1046 lang=python3
#
# [1046] Last Stone Weight
#
from typing import List

# @lc code=start
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) > 1:
            stones.sort(reverse=True)
            print(stones)
            x = stones.pop(0)
            y = stones.pop(0)

            if x == y:
                pass
            elif x != y:
                stones.append(abs(y - x))

        if len(stones) == 1:
            return stones[0]

        return 0


# @lc code=end
