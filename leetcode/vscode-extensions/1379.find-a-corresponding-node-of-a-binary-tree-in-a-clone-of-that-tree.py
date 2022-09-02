#
# @lc app=leetcode id=1379 lang=python3
#
# [1379] Find a Corresponding Node of a Binary Tree in a Clone of That Tree
#

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


# @lc code=start
class Solution:
    def getTargetCopy(self, origin: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        st = [cloned]

        while len(st) > 0:
            curr = st.pop()
            if curr:
                if curr.val == target.val:
                    return curr

                st.append(curr.left)
                st.append(curr.right)

        return None


# @lc code=end
