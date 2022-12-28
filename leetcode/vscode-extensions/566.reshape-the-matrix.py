#
# @lc app=leetcode id=566 lang=python3
#
# [566] Reshape the Matrix
#
from typing import List

# @lc code=start
class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        if len(mat) * len(mat[0]) != r * c:
            return mat

        flat = []
        for row in mat:
            for num in row:
                flat.append(num)

        res = []
        for i in range(0, len(flat), c):
            res.append(flat[i : i + c])

        return res


# @lc code=end
