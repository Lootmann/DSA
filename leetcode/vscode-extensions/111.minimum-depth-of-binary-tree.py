#
# @lc app=leetcode id=111 lang=python3
#
# [111] Minimum Depth of Binary Tree
#
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

    def __str__(self) -> str:
        return f"{self.val}"

    def __repr__(self) -> str:
        return f"{self.val}"


# @lc code=start
# Definition for a binary tree node.
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0

        stack = [(root, 1)]

        height = 10**5 + 1

        while len(stack) != 0:
            s = stack.pop()

            if s[0].left:
                stack.append((s[0].left, s[1] + 1))

            if s[0].right:
                stack.append((s[0].right, s[1] + 1))

            # leaf
            if s[0].left is None and s[0].right is None:
                height = min(height, s[1])

        return height


# @lc code=end
