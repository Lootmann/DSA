#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int alpha[26]{};

  string s;
  cin >> s;

  for (const char ch : s) {
    alpha[(int)(ch - 'a')]++;
  }

  for (int i = 0; i < 26; i++) {
    cout << string(alpha[i], (char)('a' + i));
  }
  cout << '\n';
}

int main() {
  FastIO;
  solve();
}
