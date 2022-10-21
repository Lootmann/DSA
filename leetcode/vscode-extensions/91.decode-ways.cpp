/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  int numDecodings(string s) {
    if (s[0] == '0') return 0;

    int n = (int)s.size();

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
      if (s[i - 1] != '0') {
        dp[i] = dp[i - 1];
      }

      if (i >= 2) {
        int x = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
        if (10 <= x && x <= 26) {
          dp[i] += dp[i - 2];
        }
      }
    }

    return dp[n];
  }
};
// @lc code=end
