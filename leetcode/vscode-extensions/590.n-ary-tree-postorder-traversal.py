#
# @lc app=leetcode id=590 lang=python3
#
# [590] N-ary Tree Postorder Traversal
#
from typing import List


class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children


# @lc code=start
class Solution:
    def traversal(self, root: "Node", res: List[int]):
        if not root:
            return

        for child in root.children:
            self.traversal(child, res)

        res.append(root.val)

    def postorder(self, root: "Node") -> List[int]:
        res = []
        self.traversal(root, res)

        return res


# @lc code=end
