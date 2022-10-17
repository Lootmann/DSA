#
# @lc app=leetcode id=965 lang=python3
#
# [965] Univalued Binary Tree
#
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# @lc code=start
class Solution:
    def isUnivalTree(self, root: Optional[TreeNode]) -> bool:
        stack = [root]
        is_same = True

        while len(stack) != 0:
            v = stack.pop()

            if v.left is None and v.right is None:
                continue

            if v.left:
                is_same &= v.val == v.left.val
                stack.append(v.left)

            if v.right:
                is_same &= v.val == v.right.val
                stack.append(v.right)

        return is_same


# @lc code=end
