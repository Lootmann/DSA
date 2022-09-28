/*
 * @lc app=leetcode id=1266 lang=cpp
 *
 * [1266] Minimum Time Visiting All Points
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int res{};

    for (size_t i = 0; i < points.size() - 1; i++) {
      vector<int> from = points[i];
      vector<int> to = points[i + 1];

      int max_dist = max(abs(from[0] - to[0]), abs(from[1] - to[1]));
      res += max_dist;
    }

    return res;
  }
};
// @lc code=end
