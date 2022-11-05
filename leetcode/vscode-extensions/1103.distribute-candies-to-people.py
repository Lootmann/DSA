#
# @lc app=leetcode id=1103 lang=python3
#
# [1103] Distribute Candies to People
#
from typing import List

# @lc code=start
class Solution:
    def distributeCandies(self, candies: int, num_people: int) -> List[int]:
        res = [0 for _ in range(num_people)]

        idx = 0

        while candies > 0:
            res[idx % num_people] += min(idx + 1, candies)
            idx += 1
            candies -= idx

        return res


# @lc code=end
