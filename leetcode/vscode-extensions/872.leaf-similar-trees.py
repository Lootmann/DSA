#
# @lc app=leetcode id=872 lang=python3
#
# [872] Leaf-Similar Trees
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
    def deeper_node(self, node: Optional[TreeNode], node_values: list):
        if node:
            if node.left is None and node.right is None:
                node_values.append(node.val)

            if node.left:
                self.deeper_node(node.left, node_values)

            if node.right:
                self.deeper_node(node.right, node_values)

    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        values1, values2 = [], []

        self.deeper_node(root1, values1)
        self.deeper_node(root2, values2)

        return values1 == values2


# @lc code=end
