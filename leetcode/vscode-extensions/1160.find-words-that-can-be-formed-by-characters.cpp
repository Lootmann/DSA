/*
 * @lc app=leetcode id=1160 lang=cpp
 *
 * [1160] Find Words That Can Be Formed by Characters
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  map<char, int> createMap(const string& word) {
    map<char, int> mp;
    for (const char& ch : word) {
      if (mp.find(ch) != mp.end()) {
        mp[ch]++;
      } else {
        mp[ch] = 1;
      }
    }
    return mp;
  }

  int countCharacters(vector<string>& words, string chars) {
    map<char, int> mp = createMap(chars);

    int count = 0;

    for (const string& word : words) {
      // create map
      map<char, int> tmp = createMap(word);

      // check whether a word is a good
      bool is_good = true;
      for (const auto& key : tmp) {
        if (mp.find(key.first) == mp.end()) {
          is_good = false;
          break;
        }

        if (mp[key.first] < key.second) {
          is_good = false;
          break;
        }
      }

      if (is_good) {
        cout << word << " - is a good string" << '\n';
        count += (int)word.size();
      }
    }

    return count;
  }
};
// @lc code=end
