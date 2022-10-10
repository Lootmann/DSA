#
# @lc app=leetcode id=1299 lang=python3
#
# [1299] Replace Elements with Greatest Element on Right Side
#
from typing import List

# @lc code=start
class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        maxv = -1
        res = [maxv]

        if len(arr) == 1:
            return res

        for i in range(len(arr) - 1, 0, -1):
            if maxv < arr[i]:
                maxv = arr[i]
            res.insert(0, maxv)

        print(res)
        return res


# @lc code=end
