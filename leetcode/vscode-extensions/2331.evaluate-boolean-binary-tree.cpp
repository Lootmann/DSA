/*
 * @lc app=leetcode id=2331 lang=cpp
 *
 * [2331] Evaluate Boolean Binary Tree
 */
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

// @lc code=start
class Solution {
public:
  bool evaluateTree(TreeNode *root) {
    if (root->val == 0 || root->val == 1) return root->val;

    if (root->val == 2)
      return evaluateTree(root->left) || evaluateTree(root->right);

    return evaluateTree(root->left) && evaluateTree(root->right);
  }
};
// @lc code=end
