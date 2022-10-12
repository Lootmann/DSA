#
# @lc app=leetcode id=226 lang=python3
#
# [226] Invert Binary Tree
#
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# @lc code=start
class Solution:
    def dfs(self, node: Optional[TreeNode]):
        if node:
            node.left, node.right = node.right, node.left

            if node.left:
                self.dfs(node.left)

            if node.right:
                self.dfs(node.right)

    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        self.dfs(root)
        return root


# @lc code=end
