#
# @lc app=leetcode id=832 lang=python3
#
# [832] Flipping an Image
#
from typing import List

# @lc code=start
class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        # Reverse Row
        res = []

        for i in range(len(image)):
            res.append(image[i][::-1])

        # Invert Row
        for i in range(len(res)):
            for j in range(len(res[i])):
                res[i][j] = 1 - res[i][j]

        return res


# @lc code=end
