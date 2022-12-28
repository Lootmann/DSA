#
# @lc app=leetcode id=589 lang=python3
#
# [589] N-ary Tree Preorder Traversal
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

        res.append(root.val)

        for child in root.children:
            self.traversal(child, res)

    def preorder(self, root: "Node") -> List[int]:
        res = []
        self.traversal(root, res)

        return res


# @lc code=end
