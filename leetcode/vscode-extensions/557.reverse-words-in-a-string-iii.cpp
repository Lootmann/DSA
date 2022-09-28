/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  vector<string> split(string &s, char delimiter) {
    vector<string> res;
    string word;

    for (size_t i = 0; i <= s.size(); i++) {
      if (i == s.size()) {
        res.emplace_back(word);
        break;
      }

      if (s[i] == delimiter) {
        res.emplace_back(word);
        word = "";
      } else {
        word.push_back(s[i]);
      }
    }

    return res;
  }

  string reverseWords(string s) {
    string ans{};
    auto splitted = split(s, ' ');

    for (size_t i = 0; i < splitted.size(); i++) {
      if (i != 0) {
        ans += ' ';
      }

      for (int j = (int)splitted[i].size() - 1; j >= 0; --j) {
        ans += splitted[i][j];
      }
    }

    return ans;
  }
};
// @lc code=end
