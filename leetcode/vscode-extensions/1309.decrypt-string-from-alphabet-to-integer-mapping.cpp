/*
 * @lc app=leetcode id=1309 lang=cpp
 *
 * [1309] Decrypt String from Alphabet to Integer Mapping
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  char int2ch(int num) {
    return (char)('a' + num - 1);
  }

  string freqAlphabets(string s) {
    string res{};

    for (int i = (int)s.size() - 1; i >= 0; i--) {
      int num{};

      if (s[i] == '#') {
        num += int(s[i - 2] - '0') * 10 + int(s[i - 1] - '0');
        i -= 2;
      } else {
        num += int(s[i] - '0');
      }

      res = int2ch(num) + res;
    }

    return res;
  }
};

// @lc code=end
