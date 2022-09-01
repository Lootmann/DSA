#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string &s) {
  for (size_t i = 0; i < s.size() / 2; i++) {
    if (s[i] != s[s.size() - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;

  int head_a_count{0};
  int tail_a_count{0};

  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == 'a')
      head_a_count++;
    else
      break;
  }

  for (int i = (int)s.size() - 1; i >= 0; i--) {
    if (s[i] == 'a')
      tail_a_count++;
    else
      break;
  }

  // head > tail -> ng
  if (head_a_count > tail_a_count) {
    cout << "No" << '\n';
  } else {
    // head <= tail
    // aXXXaaaa -> aXXXa(aaa)
    s = s.substr(0, (int)s.size() - (tail_a_count - head_a_count));

    if (is_palindrome(s)) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
}
