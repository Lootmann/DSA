#
# @lc app=leetcode id=559 lang=python3
#
# [559] Maximum Depth of N-ary Tree
#
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children


# @lc code=start
class Solution:
    def maxDepth(self, root: "Node") -> int:
        if not root:
            return 0

        if root.children:
            return max(self.maxDepth(child) + 1 for child in root.children)

        return 1


# @lc code=end
