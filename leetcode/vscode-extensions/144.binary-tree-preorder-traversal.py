#
# @lc app=leetcode id=144 lang=python3
#
# [144] Binary Tree Preorder Traversal
#
from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# @lc code=start
# Definition for a binary tree node.
class Solution:
    def traversal(self, root: Optional[TreeNode], lst: list) -> None:
        if root:
            lst.append(root.val)
            self.traversal(root.left, lst)
            self.traversal(root.right, lst)
        pass

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        self.traversal(root, ans)
        return ans


# @lc code=end
