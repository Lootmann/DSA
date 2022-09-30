#
# @lc app=leetcode id=700 lang=python3
#
# [700] Search in a Binary Search Tree
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
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if not root:
            return

        if root.val == val:
            return root

        if val < root.val:
            return self.searchBST(root.left, val)

        if root.val < val:
            return self.searchBST(root.right, val)


# @lc code=end
