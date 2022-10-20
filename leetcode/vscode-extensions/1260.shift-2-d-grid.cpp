/*
 * @lc app=leetcode id=1260 lang=cpp
 *
 * [1260] Shift 2D Grid
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k) {
    int index = grid.size() * grid[0].size();
    int shift = k % index;
    int size = (int)grid[0].size();

    vector<vector<int>> ans(grid.size(), vector<int>(grid[0].size()));

    for (int i = 0; i < index; i++) {
      // current
      int row = i / size;
      int col = i % size;

      // move index
      int move_i = (i + shift) % index;
      int m_row = move_i / size;
      int m_col = move_i % size;

      ans[m_row][m_col] = grid[row][col];
    }

    return ans;
  }
};
// @lc code=end
