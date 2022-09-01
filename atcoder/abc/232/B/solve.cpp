#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

char rot(char ch, int rot) {
  return (char)((ch + -(int)'a' + rot) % 26 + (int)'a');
}

string move(string& plain, int diff) {
  string res{""};
  for (char ch : plain) {
    res += rot(ch, diff);
  }
  return res;
}

void solve() {
  string s, t;
  cin >> s >> t;

  for (int i = 0; i < 26; i++) {
    if (s[0] == rot(t[0], i)) {
      if (s == move(t, i)) {
        cout << "Yes" << '\n';
        return;
      }
    }
  }
  cout << "No" << '\n';
}

int main() {
  FastIO;
  solve();
}
