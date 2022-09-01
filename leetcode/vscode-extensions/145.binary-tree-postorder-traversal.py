#
# @lc app=leetcode id=145 lang=python3
#
# [145] Binary Tree Postorder Traversal
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
    def traversal(self, node: Optional[TreeNode], lst: list) -> None:
        if node:
            self.traversal(node.left, lst)
            self.traversal(node.right, lst)
            lst.append(node.val)
        return

    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        self.traversal(root, ans)
        return ans


# @lc code=end
