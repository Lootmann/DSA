/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  int diagonalSum(vector<vector<int>>& mat) {
    int sum{};
    int size = (int)mat.size();

    // top-left diagonal
    for (int i = 0; i < size; i++) {
      sum += mat[i][i];
    }

    // bottom-left diagonal
    for (int i = 0; i < size; i++) {
      sum += mat[size - i - 1][i];
    }

    // dup number if it has
    if (size % 2 != 0) {
      sum -= mat[size / 2][size / 2];
    }

    return sum;
  }
};
// @lc code=end
