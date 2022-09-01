#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

bool is_vowel(char ch) {
  switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return true;
    default:
      return false;
  }
}

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int count{0};
  for (const auto ch : s) {
    if (is_vowel(ch)) count++;
  }

  cout << count << '\n';
}

int main() {
  FastIO;
  solve();
}
