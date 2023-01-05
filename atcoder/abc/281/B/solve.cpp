#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

bool is_alpha(char ch) {
  return 'A' <= ch && ch <= 'Z';
}

int main() {
  FastIO;

  string s;
  cin >> s;

  if (s.size() != 8 || s[1] == '0') {
    cout << "No" << '\n';
    return 0;
  }

  vector<int> vi;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (isalpha(s[i])) {
      vi.emplace_back(i);
    }
  }

  for (int i = 0; i < (int)vi.size() - 1; ++i) {
    string num = s.substr(vi[i] + 1, vi[i + 1] - vi[i] - 1);
    int snum = stoi(num);
    if (100000 <= snum && snum <= 999999) {
      cout << "Yes" << '\n';
      return 0;
    }
  }

  cout << "No" << '\n';
  return 0;
}
