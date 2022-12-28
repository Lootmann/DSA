#
# @lc app=leetcode id=938 lang=python3
#
# [938] Range Sum of BST
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
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        total = 0
        stack = [root]

        while len(stack) > 0:
            node = stack.pop()
            if node:

                if low <= node.val <= high:
                    total += node.val

                if low < node.val:
                    stack.append(node.left)

                if node.val < high:
                    stack.append(node.right)

        return total


# @lc code=end
