#
# @lc app=leetcode id=1022 lang=python3
#
# [1022] Sum of Root To Leaf Binary Numbers
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
    def sumRootToLeaf(self, root: Optional[TreeNode], val: int = 0) -> int:
        if not root:
            return 0

        val = val * 2 + root.val

        if root.right is None and root.left is None:
            return val

        return self.sumRootToLeaf(root.left, val) + self.sumRootToLeaf(root.right, val)


# @lc code=end
