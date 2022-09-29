#
# @lc app=leetcode id=897 lang=python3
#
# [897] Increasing Order Search Tree
#
from typing import List


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


# @lc code=start
class Solution:
    def inorder(self, node: TreeNode, arr: List):
        if node:
            if node.left:
                self.inorder(node.left, arr)

            arr.append(node.val)

            if node.right:
                self.inorder(node.right, arr)

    def increasingBST(self, root: TreeNode) -> TreeNode:
        res = []
        self.inorder(root, res)
        print(res)

        tree = TreeNode()
        ans = tree
        for num in res:
            tree.right = TreeNode(num)
            tree = tree.right

        return ans.right


# @lc code=end
