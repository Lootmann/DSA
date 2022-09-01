#
# @lc app=leetcode id=2236 lang=python3
#
# [2236] Root Equals Sum of Children
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
    def checkTree(self, root: Optional[TreeNode]) -> bool:
        return root.left.val + root.right.val == root.val


# @lc code=end
