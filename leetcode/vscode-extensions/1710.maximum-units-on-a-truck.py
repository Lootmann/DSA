#
# @lc app=leetcode id=1710 lang=python3
#
# [1710] Maximum Units on a Truck
#
from typing import List

# @lc code=start
class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key=lambda a: -a[1])
        total = 0

        for box in boxTypes:
            if truckSize < 0:
                break

            total += min(truckSize, box[0]) * box[1]
            truckSize -= box[0]

        return total


# @lc code=end
