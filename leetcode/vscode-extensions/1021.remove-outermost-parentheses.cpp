/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  string removeOuterParentheses(string s) {
    string ans{};
    stack<char> st;

    for (const char ch : s) {
      if (ch == '(') {
        st.push(ch);
        if (st.size() != 1) ans += ch;

      } else {
        st.pop();
        if (st.size() != 0) ans += ch;
      }
    }
    return ans;
  }
};
// @lc code=end
