/*
 * @lc app=leetcode id=1925 lang=cpp
 *
 * [1925] Count Square Sum Triples
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  int countTriples(int n) {
    int count{0};

    for (int a = 1; a <= n; ++a) {
      for (int b = 1; b <= n; ++b) {
        int c = a * a + b * b;
        int m = sqrt(c);

        if (m <= n && abs(m * m - c) < 1e-6) {
          count++;
        }
      }
    }
    return count;
  }
};
// @lc code=end
