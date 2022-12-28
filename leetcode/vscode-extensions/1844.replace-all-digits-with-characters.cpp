/*
 * @lc app=leetcode id=1844 lang=cpp
 *
 * [1844] Replace All Digits with Characters
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  char shift(char ch, int num) {
    return (char)((int)ch + (int)num - '0');
  }

  string replaceDigits(string s) {
    string ans{};

    for (int i = 0; i < (int)s.size(); i++) {
      char ch = s[i];

      if ('0' <= ch && ch <= '9') {
        ans += shift(ch, s[i - 1]);
      } else {
        ans += ch;
      }
    }

    return ans;
  }
};
// @lc code=end
