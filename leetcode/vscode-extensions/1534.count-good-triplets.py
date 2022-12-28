#
# @lc app=leetcode id=1534 lang=python3
#
# [1534] Count Good Triplets
#
from typing import List

# @lc code=start
class Solution:
    def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:
        count = 0
        for i in range(len(arr)):
            for j in range(i + 1, len(arr)):
                for k in range(j + 1, len(arr)):
                    within_a = abs(arr[i] - arr[j]) <= a
                    within_b = abs(arr[j] - arr[k]) <= b
                    within_c = abs(arr[i] - arr[k]) <= c

                    if within_a and within_b and within_c:
                        count += 1

        return count


# @lc code=end
