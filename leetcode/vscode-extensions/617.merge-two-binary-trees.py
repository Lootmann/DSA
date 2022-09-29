#
# @lc app=leetcode id=617 lang=python3
#
# [617] Merge Two Binary Trees
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
    def merge(self, n1: Optional[TreeNode], n2: Optional[TreeNode]):
        if n1 and n2:
            n1.val += n2.val

            if n1.right:
                if n2.right:
                    self.merge(n1.right, n2.right)

            if n1.left:
                if n2.left:
                    self.merge(n1.left, n2.left)

            if not n1.right:
                if n2.right:
                    n1.right = n2.right

            if not n1.left:
                if n2.left:
                    n1.left = n2.left

        if n1 and not n2:
            return

        if not n1 and n2:
            n1 = n2

    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root2:
            return root1

        if not root1:
            return root2

        ans = root1
        self.merge(root1, root2)
        return ans


# @lc code=end
